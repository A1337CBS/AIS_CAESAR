// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//                                                                           -
//                       ****************************                        -
//                        ARITHMETIC CODING EXAMPLES                         -
//                       ****************************                        -
//                                                                           -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//                                                                           -
// Fast arithmetic coding implementation                                     -
// -> 32-bit variables, 32-bit product, periodic updates, table decoding     -
//                                                                           -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//                                                                           -
// Version 1.00  -  April 25, 2004                                           -
//                                                                           -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//                                                                           -
//                                  WARNING                                  -
//                                 =========                                 -
//                                                                           -
// The only purpose of this program is to demonstrate the basic principles   -
// of arithmetic coding. The original version of this code can be found in   -
// Digital Signal Compression: Principles and Practice                       -
// (Cambridge University Press, 2011, ISBN: 9780511984655)                   -
//                                                                           -
// Copyright (c) 2019 by Amir Said (said@ieee.org) &                         -
//                       William A. Pearlman (pearlw@ecse.rpi.edu)           -
//                                                                           -
// Redistribution and use in source and binary forms, with or without        -
// modification, are permitted provided that the following conditions are    -
// met:                                                                      -
//                                                                           -
// 1. Redistributions of source code must retain the above copyright notice, -
// this list of conditions and the following disclaimer.                     -
//                                                                           -
// 2. Redistributions in binary form must reproduce the above copyright      -
// notice, this list of conditions and the following disclaimer in the       -
// documentation and/or other materials provided with the distribution.      -
//                                                                           -
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS       -
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED -
// TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A           -
// PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER -
// OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,  -
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,       -
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR        -
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF    -
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING      -
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS        -
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.              -
//                                                                           -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//                                                                           -
// A description of the arithmetic coding method used here is available in   -
//                                                                           -
// Lossless Compression Handbook, ed. K. Sayood                              -
// Chapter 5: Arithmetic Coding (A. Said), pp. 101-152, Academic Press, 2003 -
//                                                                           -
// A. Said, Introduction to Arithmetic Coding Theory and Practice             -
// HP Labs report HPL-2004-76  -  http://www.hpl.hp.com/techreports/         -
//                                                                           -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


// - - Definitions - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#ifndef ARITHMETIC_CODEC
#define ARITHMETIC_CODEC

#include <stdio.h>


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - Class definitions - - - - - - - - - - - - - - - - - - - - - - - - - - -

class Static_Bit_Model                         // static model for binary data
{
public:

  Static_Bit_Model(void);

  void set_probability_0(double);             // set probability of symbol '0'

private:  //  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
  unsigned least_probable_bit, shift_a, shift_b;
  friend class Arithmetic_Codec;
};

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

class Static_Data_Model                       // static model for general data
{
public:

  Static_Data_Model(void);
 ~Static_Data_Model(void);

  unsigned model_symbols(void) { return data_symbols; }

  void set_distribution(unsigned number_of_symbols,
                        const double probability[] = 0);    // 0 means uniform

private:  //  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
  unsigned * distribution, * rank, * data;
  unsigned data_symbols, most_probable_symbol, first_tests[3];
  friend class Arithmetic_Codec;
};

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

class Adaptive_Bit_Model                     // adaptive model for binary data
{
public:

  Adaptive_Bit_Model(void);         

  void reset(void);                             // reset to equiprobable model

private:  //  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
  void     update(void);
  unsigned update_cycle, bits_until_update;
  unsigned mpb_prob, least_probable_bit, lpb_count, bit_count;
  friend class Arithmetic_Codec;
};

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

class Adaptive_Data_Model                    // adaptive model for binary data
{
public:

  Adaptive_Data_Model(void);
  Adaptive_Data_Model(unsigned number_of_symbols);
 ~Adaptive_Data_Model(void);

  unsigned model_symbols(void) { return data_symbols; }

  void reset(void);                             // reset to equiprobable model
  void set_alphabet(unsigned number_of_symbols);

private:  //  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
  void     update(void);
  unsigned * distribution, * symbol_count, * rank, * data;
  unsigned data_symbols, most_probable_symbol, first_tests[3];
  unsigned total_count, update_cycle, symbols_until_update;
  friend class Arithmetic_Codec;
};


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// - - Encoder and decoder class - - - - - - - - - - - - - - - - - - - - - - -

// Class with both the arithmetic encoder and decoder.  All compressed data is
// saved to a memory buffer

class Arithmetic_Codec
{
public:

  Arithmetic_Codec(void);
 ~Arithmetic_Codec(void);
  Arithmetic_Codec(unsigned max_code_bytes,
                   unsigned char * user_buffer = 0);         // 0 = assign new

  unsigned char * buffer(void) { return code_buffer; }

  void set_buffer(unsigned max_code_bytes,
                  unsigned char * user_buffer = 0);          // 0 = assign new

  void     start_encoder(void);
  void     start_decoder(void);
  void     read_from_file(FILE * code_file);  // read code data, start decoder

  unsigned stop_encoder(void);                 // returns number of bytes used
  unsigned write_to_file(FILE * code_file);   // stop encoder, write code data
  void     stop_decoder(void);

  void     put_bit(unsigned bit);
  unsigned get_bit(void);

  void     put_bits(unsigned data, unsigned number_of_bits);
  unsigned get_bits(unsigned number_of_bits);

  void     encode(unsigned bit,
                  Static_Bit_Model &);
  unsigned decode(Static_Bit_Model &);

  void     encode(unsigned data,
                  Static_Data_Model &);
  unsigned decode(Static_Data_Model &);

  void     encode(unsigned bit,
                  Adaptive_Bit_Model &);
  unsigned decode(Adaptive_Bit_Model &);

  void     encode(unsigned data,
                  Adaptive_Data_Model &);
  unsigned decode(Adaptive_Data_Model &);

private:  //  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
  void propagate_carry(void);
  void renorm_enc_interval(void);
  void renorm_dec_interval(void);
  unsigned char * code_buffer, * new_buffer, * ac_pointer;
  unsigned base, value, length;                     // arithmetic coding state
  unsigned buffer_size, mode;     // mode: 0 = undef, 1 = encoder, 2 = decoder
};

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#endif
