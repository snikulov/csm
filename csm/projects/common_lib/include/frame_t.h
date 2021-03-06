//*******************************************************************************
// Title: Communication System Modeler v.1.1
// File: frame_t.h
// Author: Pavel Morozkin
// Date: August 28th 2013
// Revised: August 28th 2013
//*******************************************************************************
// NOTE:
// The author is not responsible for any malfunctioning of this program, nor for
// any damage caused by it. Please include the original program along with these
// comments in any redistribution.
//
// For more information and suggestions, please email me: pavelmorozkin@yandex.ru
//
// COPYRIGHT NOTICE: This computer program is free for non-commercial purposes.
// You may implement this program for any non-commercial application. You may
// also implement this program for commercial purposes, provided that you
// obtain my written permission. Any modification of this program is covered 
// by this copyright.
//
// Copyright (c) 2013, Pavel Morozkin. All rights reserved.
//*******************************************************************************
#ifndef _FRAME_T_
#define _FRAME_T_

typedef struct frame frame_base_t;
typedef frame_base_t* frame_t;

struct frame
{
	int* xframe;
	int  xsize;
};

void frame_init (frame_t self);
void frame_deinit (frame_t self);

frame_t frame_create (int size);
void frame_destroy (frame_t self);

void frame_display (frame_t self);
char* frame_to_str (frame_t self);

int frame_cmp (frame_t f_frame, frame_t s_frame);
frame_t frame_cpy (frame_t d_frame, frame_t s_frame);

int frame_find_invalid_bits	(frame_t f_frame, frame_t s_frame);
int frame_find_valid_bits (frame_t f_frame, frame_t s_frame);

#endif