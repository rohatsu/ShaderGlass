/*
ShaderGlass shader crt-shaders-crt-royale-src\crt-royale-bloom-vertical imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/crt-royale/src/crt-royale-bloom-vertical.slang
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomVerticalShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,7,125,
237,118,74,250,71,63,
52,228,86,6,65,141,
211,110,1,0,0,0,
52,20,0,0,5,0,
0,0,52,0,0,0,
52,15,0,0,128,15,
0,0,8,16,0,0,
152,19,0,0,82,68,
69,70,248,14,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
208,14,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
124,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,128,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,85,66,
79,0,80,117,115,104,
0,171,171,171,124,0,
0,0,47,0,0,0,
184,0,0,0,0,1,
0,0,0,0,0,0,
0,0,0,0,128,0,
0,0,6,0,0,0,
8,13,0,0,96,0,
0,0,0,0,0,0,
0,0,0,0,16,8,
0,0,0,0,0,0,
64,0,0,0,2,0,
0,0,36,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,72,8,0,0,
64,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
132,8,0,0,68,0,
0,0,4,0,0,0,
0,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,149,8,
0,0,72,0,0,0,
4,0,0,0,0,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,172,8,0,0,
76,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
195,8,0,0,80,0,
0,0,4,0,0,0,
0,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,219,8,
0,0,84,0,0,0,
4,0,0,0,0,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,253,8,0,0,
88,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
17,9,0,0,92,0,
0,0,4,0,0,0,
0,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,39,9,
0,0,96,0,0,0,
4,0,0,0,0,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,61,9,0,0,
100,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
84,9,0,0,104,0,
0,0,4,0,0,0,
0,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,106,9,
0,0,108,0,0,0,
4,0,0,0,0,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,128,9,0,0,
112,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
152,9,0,0,116,0,
0,0,4,0,0,0,
0,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,177,9,
0,0,120,0,0,0,
4,0,0,0,0,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,201,9,0,0,
124,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
237,9,0,0,128,0,
0,0,4,0,0,0,
0,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,11,10,
0,0,132,0,0,0,
4,0,0,0,0,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,41,10,0,0,
136,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
71,10,0,0,140,0,
0,0,4,0,0,0,
0,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,101,10,
0,0,144,0,0,0,
4,0,0,0,0,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,131,10,0,0,
148,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
161,10,0,0,152,0,
0,0,4,0,0,0,
0,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,178,10,
0,0,156,0,0,0,
4,0,0,0,2,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,210,10,0,0,
160,0,0,0,4,0,
0,0,2,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
241,10,0,0,164,0,
0,0,4,0,0,0,
2,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,16,11,
0,0,168,0,0,0,
4,0,0,0,2,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,47,11,0,0,
172,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
85,11,0,0,176,0,
0,0,4,0,0,0,
0,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,123,11,
0,0,180,0,0,0,
4,0,0,0,0,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,141,11,0,0,
184,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
163,11,0,0,188,0,
0,0,4,0,0,0,
0,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,188,11,
0,0,192,0,0,0,
4,0,0,0,0,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,207,11,0,0,
196,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
229,11,0,0,200,0,
0,0,4,0,0,0,
0,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,254,11,
0,0,204,0,0,0,
4,0,0,0,0,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,23,12,0,0,
208,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
50,12,0,0,212,0,
0,0,4,0,0,0,
0,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,77,12,
0,0,216,0,0,0,
4,0,0,0,0,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,100,12,0,0,
220,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
123,12,0,0,224,0,
0,0,4,0,0,0,
0,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,142,12,
0,0,228,0,0,0,
4,0,0,0,0,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,165,12,0,0,
232,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
188,12,0,0,236,0,
0,0,4,0,0,0,
0,0,0,0,96,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,209,12,
0,0,240,0,0,0,
4,0,0,0,0,0,
0,0,96,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,232,12,0,0,
244,0,0,0,4,0,
0,0,0,0,0,0,
96,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
103,108,111,98,97,108,
95,77,86,80,0,102,
108,111,97,116,52,120,
52,0,2,0,3,0,
4,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,27,8,
0,0,103,108,111,98,
97,108,95,99,114,116,
95,103,97,109,109,97,
0,102,108,111,97,116,
0,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,89,8,
0,0,103,108,111,98,
97,108,95,108,99,100,
95,103,97,109,109,97,
0,103,108,111,98,97,
108,95,108,101,118,101,
108,115,95,99,111,110,
116,114,97,115,116,0,
103,108,111,98,97,108,
95,104,97,108,97,116,
105,111,110,95,119,101,
105,103,104,116,0,103,
108,111,98,97,108,95,
100,105,102,102,117,115,
105,111,110,95,119,101,
105,103,104,116,0,103,
108,111,98,97,108,95,
98,108,111,111,109,95,
117,110,100,101,114,101,
115,116,105,109,97,116,
101,95,108,101,118,101,
108,115,0,103,108,111,
98,97,108,95,98,108,
111,111,109,95,101,120,
99,101,115,115,0,103,
108,111,98,97,108,95,
98,101,97,109,95,109,
105,110,95,115,105,103,
109,97,0,103,108,111,
98,97,108,95,98,101,
97,109,95,109,97,120,
95,115,105,103,109,97,
0,103,108,111,98,97,
108,95,98,101,97,109,
95,115,112,111,116,95,
112,111,119,101,114,0,
103,108,111,98,97,108,
95,98,101,97,109,95,
109,105,110,95,115,104,
97,112,101,0,103,108,
111,98,97,108,95,98,
101,97,109,95,109,97,
120,95,115,104,97,112,
101,0,103,108,111,98,
97,108,95,98,101,97,
109,95,115,104,97,112,
101,95,112,111,119,101,
114,0,103,108,111,98,
97,108,95,98,101,97,
109,95,104,111,114,105,
122,95,102,105,108,116,
101,114,0,103,108,111,
98,97,108,95,98,101,
97,109,95,104,111,114,
105,122,95,115,105,103,
109,97,0,103,108,111,
98,97,108,95,98,101,
97,109,95,104,111,114,
105,122,95,108,105,110,
101,97,114,95,114,103,
98,95,119,101,105,103,
104,116,0,103,108,111,
98,97,108,95,99,111,
110,118,101,114,103,101,
110,99,101,95,111,102,
102,115,101,116,95,120,
95,114,0,103,108,111,
98,97,108,95,99,111,
110,118,101,114,103,101,
110,99,101,95,111,102,
102,115,101,116,95,120,
95,103,0,103,108,111,
98,97,108,95,99,111,
110,118,101,114,103,101,
110,99,101,95,111,102,
102,115,101,116,95,120,
95,98,0,103,108,111,
98,97,108,95,99,111,
110,118,101,114,103,101,
110,99,101,95,111,102,
102,115,101,116,95,121,
95,114,0,103,108,111,
98,97,108,95,99,111,
110,118,101,114,103,101,
110,99,101,95,111,102,
102,115,101,116,95,121,
95,103,0,103,108,111,
98,97,108,95,99,111,
110,118,101,114,103,101,
110,99,101,95,111,102,
102,115,101,116,95,121,
95,98,0,103,108,111,
98,97,108,95,109,97,
115,107,95,116,121,112,
101,0,103,108,111,98,
97,108,95,109,97,115,
107,95,115,97,109,112,
108,101,95,109,111,100,
101,95,100,101,115,105,
114,101,100,0,103,108,
111,98,97,108,95,109,
97,115,107,95,110,117,
109,95,116,114,105,97,
100,115,95,100,101,115,
105,114,101,100,0,103,
108,111,98,97,108,95,
109,97,115,107,95,116,
114,105,97,100,95,115,
105,122,101,95,100,101,
115,105,114,101,100,0,
103,108,111,98,97,108,
95,109,97,115,107,95,
115,112,101,99,105,102,
121,95,110,117,109,95,
116,114,105,97,100,115,
0,103,108,111,98,97,
108,95,97,97,95,115,
117,98,112,105,120,101,
108,95,114,95,111,102,
102,115,101,116,95,120,
95,114,117,110,116,105,
109,101,0,103,108,111,
98,97,108,95,97,97,
95,115,117,98,112,105,
120,101,108,95,114,95,
111,102,102,115,101,116,
95,121,95,114,117,110,
116,105,109,101,0,103,
108,111,98,97,108,95,
97,97,95,99,117,98,
105,99,95,99,0,103,
108,111,98,97,108,95,
97,97,95,103,97,117,
115,115,95,115,105,103,
109,97,0,103,108,111,
98,97,108,95,103,101,
111,109,95,109,111,100,
101,95,114,117,110,116,
105,109,101,0,103,108,
111,98,97,108,95,103,
101,111,109,95,114,97,
100,105,117,115,0,103,
108,111,98,97,108,95,
103,101,111,109,95,118,
105,101,119,95,100,105,
115,116,0,103,108,111,
98,97,108,95,103,101,
111,109,95,116,105,108,
116,95,97,110,103,108,
101,95,120,0,103,108,
111,98,97,108,95,103,
101,111,109,95,116,105,
108,116,95,97,110,103,
108,101,95,121,0,103,
108,111,98,97,108,95,
103,101,111,109,95,97,
115,112,101,99,116,95,
114,97,116,105,111,95,
120,0,103,108,111,98,
97,108,95,103,101,111,
109,95,97,115,112,101,
99,116,95,114,97,116,
105,111,95,121,0,103,
108,111,98,97,108,95,
103,101,111,109,95,111,
118,101,114,115,99,97,
110,95,120,0,103,108,
111,98,97,108,95,103,
101,111,109,95,111,118,
101,114,115,99,97,110,
95,121,0,103,108,111,
98,97,108,95,98,111,
114,100,101,114,95,115,
105,122,101,0,103,108,
111,98,97,108,95,98,
111,114,100,101,114,95,
100,97,114,107,110,101,
115,115,0,103,108,111,
98,97,108,95,98,111,
114,100,101,114,95,99,
111,109,112,114,101,115,
115,0,103,108,111,98,
97,108,95,105,110,116,
101,114,108,97,99,101,
95,98,102,102,0,103,
108,111,98,97,108,95,
105,110,116,101,114,108,
97,99,101,95,49,48,
56,48,105,0,103,108,
111,98,97,108,95,105,
110,116,101,114,108,97,
99,101,95,100,101,116,
101,99,116,95,116,111,
103,103,108,101,0,171,
248,13,0,0,0,0,
0,0,16,0,0,0,
2,0,0,0,20,14,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,56,14,
0,0,16,0,0,0,
16,0,0,0,0,0,
0,0,20,14,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,76,14,0,0,
32,0,0,0,16,0,
0,0,2,0,0,0,
20,14,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
94,14,0,0,48,0,
0,0,4,0,0,0,
0,0,0,0,120,14,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,156,14,
0,0,64,0,0,0,
16,0,0,0,0,0,
0,0,20,14,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,184,14,0,0,
80,0,0,0,16,0,
0,0,0,0,0,0,
20,14,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
112,97,114,97,109,115,
95,83,111,117,114,99,
101,83,105,122,101,0,
102,108,111,97,116,52,
0,171,171,171,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
10,14,0,0,112,97,
114,97,109,115,95,79,
114,105,103,105,110,97,
108,83,105,122,101,0,
112,97,114,97,109,115,
95,79,117,116,112,117,
116,83,105,122,101,0,
112,97,114,97,109,115,
95,70,114,97,109,101,
67,111,117,110,116,0,
100,119,111,114,100,0,
171,171,0,0,19,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,112,14,
0,0,112,97,114,97,
109,115,95,77,65,83,
75,69,68,95,83,67,
65,78,76,73,78,69,
83,83,105,122,101,0,
112,97,114,97,109,115,
95,66,76,79,79,77,
95,65,80,80,82,79,
88,83,105,122,101,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,73,83,
71,78,68,0,0,0,
2,0,0,0,8,0,
0,0,56,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,15,15,
0,0,56,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,3,3,
0,0,84,69,88,67,
79,79,82,68,0,171,
171,171,79,83,71,78,
128,0,0,0,4,0,
0,0,8,0,0,0,
104,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,12,0,0,
104,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,12,3,0,0,
104,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,1,14,0,0,
113,0,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,2,0,
0,0,15,0,0,0,
84,69,88,67,79,79,
82,68,0,83,86,95,
80,111,115,105,116,105,
111,110,0,171,171,171,
83,72,69,88,136,3,
0,0,80,0,1,0,
226,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,11,0,0,0,
89,0,0,4,70,142,
32,0,1,0,0,0,
3,0,0,0,95,0,
0,3,242,16,16,0,
0,0,0,0,95,0,
0,3,50,16,16,0,
1,0,0,0,101,0,
0,3,50,32,16,0,
0,0,0,0,101,0,
0,3,194,32,16,0,
0,0,0,0,101,0,
0,3,18,32,16,0,
1,0,0,0,103,0,
0,4,242,32,16,0,
2,0,0,0,1,0,
0,0,104,0,0,2,
1,0,0,0,14,0,
0,9,18,0,16,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
2,0,0,0,14,0,
0,8,130,32,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
26,128,32,0,1,0,
0,0,0,0,0,0,
56,0,0,10,50,32,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,2,64,0,0,
71,3,128,63,71,3,
128,63,0,0,0,0,
0,0,0,0,54,0,
0,5,66,32,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
14,0,0,9,18,0,
16,0,0,0,0,0,
10,128,32,0,1,0,
0,0,2,0,0,0,
10,128,32,0,0,0,
0,0,10,0,0,0,
0,0,0,9,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,26,128,32,128,
65,0,0,0,0,0,
0,0,10,0,0,0,
50,0,0,11,18,0,
16,0,0,0,0,0,
42,128,32,0,0,0,
0,0,10,0,0,0,
10,0,16,0,0,0,
0,0,26,128,32,0,
0,0,0,0,10,0,
0,0,56,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,65,
51,0,0,7,34,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,66,52,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,65,56,0,0,11,
194,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,61,
0,0,0,61,6,132,
32,0,1,0,0,0,
2,0,0,0,51,0,
0,7,98,0,16,0,
0,0,0,0,166,11,
16,0,0,0,0,0,
86,5,16,0,0,0,
0,0,51,0,0,7,
34,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
0,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,55,65,0,
0,5,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
29,0,0,8,66,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,58,128,32,0,
0,0,0,0,9,0,
0,0,55,0,0,9,
18,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,50,0,0,9,
34,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,40,126,156,61,
1,64,0,0,104,174,
83,189,50,0,0,10,
18,32,16,0,1,0,
0,0,10,0,16,128,
65,0,0,0,0,0,
0,0,1,64,0,0,
224,17,23,60,26,0,
16,0,0,0,0,0,
56,0,0,8,242,0,
16,0,0,0,0,0,
86,21,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,1,0,
0,0,50,0,0,10,
242,0,16,0,0,0,
0,0,6,16,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
50,0,0,10,242,0,
16,0,0,0,0,0,
166,26,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,2,0,
0,0,70,14,16,0,
0,0,0,0,50,0,
0,10,242,32,16,0,
2,0,0,0,246,31,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,3,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,24,0,0,0,
1,0,0,0,0,0,
0,0,6,0,0,0,
21,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,90,236,
71,120,230,47,79,167,
118,138,5,84,90,20,
14,251,1,0,0,0,
96,8,0,0,5,0,
0,0,52,0,0,0,
248,0,0,0,92,1,
0,0,144,1,0,0,
196,7,0,0,82,68,
69,70,188,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
147,0,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
124,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,140,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,95,83,
111,117,114,99,101,95,
115,97,109,112,108,101,
114,0,83,111,117,114,
99,101,0,77,105,99,
114,111,115,111,102,116,
32,40,82,41,32,72,
76,83,76,32,83,104,
97,100,101,114,32,67,
111,109,112,105,108,101,
114,32,49,48,46,49,
0,171,73,83,71,78,
92,0,0,0,3,0,
0,0,8,0,0,0,
80,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
80,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,12,12,0,0,
80,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,1,1,0,0,
84,69,88,67,79,79,
82,68,0,171,171,171,
79,83,71,78,44,0,
0,0,1,0,0,0,
8,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
15,0,0,0,83,86,
95,84,97,114,103,101,
116,0,171,171,83,72,
69,88,44,6,0,0,
80,0,0,0,139,1,
0,0,106,8,0,1,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,98,16,
0,3,194,16,16,0,
0,0,0,0,98,16,
0,3,18,16,16,0,
1,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,7,0,0,0,
56,0,0,7,18,0,
16,0,0,0,0,0,
10,16,16,0,1,0,
0,0,10,16,16,0,
1,0,0,0,14,0,
0,7,18,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
10,0,16,0,0,0,
0,0,56,0,0,10,
242,0,16,0,1,0,
0,0,6,0,16,0,
0,0,0,0,2,64,
0,0,254,68,16,194,
131,191,79,194,85,98,
141,194,59,170,184,194,
56,0,0,10,242,0,
16,0,0,0,0,0,
6,0,16,0,0,0,
0,0,2,64,0,0,
59,170,184,191,59,170,
184,192,131,191,79,193,
59,170,184,193,25,0,
0,5,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
25,0,0,5,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,0,0,0,7,
242,0,16,0,2,0,
0,0,86,15,16,0,
1,0,0,0,6,10,
16,0,1,0,0,0,
14,0,0,7,242,0,
16,0,1,0,0,0,
86,15,16,0,1,0,
0,0,70,14,16,0,
2,0,0,0,0,0,
0,10,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
2,64,0,0,0,0,
160,64,0,0,160,64,
0,0,224,64,0,0,
224,64,50,0,0,10,
242,0,16,0,3,0,
0,0,230,30,16,128,
65,0,0,0,0,0,
0,0,230,4,16,0,
1,0,0,0,70,20,
16,0,0,0,0,0,
50,0,0,9,242,0,
16,0,1,0,0,0,
230,30,16,0,0,0,
0,0,70,14,16,0,
1,0,0,0,70,20,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,4,0,
0,0,230,10,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,70,0,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,56,0,
0,7,114,0,16,0,
4,0,0,0,86,5,
16,0,2,0,0,0,
70,2,16,0,4,0,
0,0,50,0,0,9,
114,0,16,0,3,0,
0,0,70,2,16,0,
3,0,0,0,246,15,
16,0,2,0,0,0,
70,2,16,0,4,0,
0,0,0,0,0,7,
242,0,16,0,4,0,
0,0,86,15,16,0,
0,0,0,0,6,10,
16,0,0,0,0,0,
14,0,0,7,242,0,
16,0,0,0,0,0,
86,15,16,0,0,0,
0,0,70,14,16,0,
4,0,0,0,0,0,
0,10,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,64,64,0,0,
64,64,50,0,0,10,
242,0,16,0,5,0,
0,0,230,30,16,128,
65,0,0,0,0,0,
0,0,230,4,16,0,
0,0,0,0,70,20,
16,0,0,0,0,0,
50,0,0,9,242,0,
16,0,0,0,0,0,
230,30,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,70,20,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,6,0,
0,0,70,0,16,0,
5,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,230,10,
16,0,5,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,50,0,
0,9,114,0,16,0,
3,0,0,0,70,2,
16,0,6,0,0,0,
246,15,16,0,4,0,
0,0,70,2,16,0,
3,0,0,0,50,0,
0,9,114,0,16,0,
3,0,0,0,70,2,
16,0,5,0,0,0,
86,5,16,0,4,0,
0,0,70,2,16,0,
3,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,5,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,7,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
5,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,5,0,0,0,
70,0,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,0,0,
0,0,230,10,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,50,0,0,9,
114,0,16,0,3,0,
0,0,70,2,16,0,
5,0,0,0,86,5,
16,0,4,0,0,0,
70,2,16,0,3,0,
0,0,50,0,0,9,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,246,15,
16,0,4,0,0,0,
70,2,16,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,70,0,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
230,10,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
50,0,0,9,114,0,
16,0,0,0,0,0,
70,2,16,0,3,0,
0,0,86,5,16,0,
2,0,0,0,70,2,
16,0,0,0,0,0,
50,0,0,9,114,0,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,246,15,16,0,
2,0,0,0,70,2,
16,0,0,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
10,16,16,0,1,0,
0,0,1,64,0,0,
143,63,176,189,14,0,
0,7,130,0,16,0,
0,0,0,0,1,64,
0,0,185,90,178,62,
58,0,16,0,0,0,
0,0,56,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,59,170,184,63,
25,0,0,5,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,56,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,59,170,184,63,
25,0,0,5,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,14,0,0,7,
18,0,16,0,1,0,
0,0,1,64,0,0,
149,117,204,62,10,16,
16,0,1,0,0,0,
51,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,56,0,
0,7,114,32,16,0,
0,0,0,0,246,15,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,45,0,
0,0,7,0,0,0,
0,0,0,0,4,0,
0,0,34,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
9,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0
};

}

namespace RetroArch
{
class CrtShadersCrtRoyaleSrcCrtRoyaleBloomVerticalShaderDef : public ShaderDef
{
public:
	CrtShadersCrtRoyaleSrcCrtRoyaleBloomVerticalShaderDef() : ShaderDef{}
	{
		Name = "crt-royale-bloom-vertical";
		VertexByteCode = RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomVerticalShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomVerticalShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomVerticalShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomVerticalShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("crt_gamma", 0, 64, 4, 1.000000f, 5.000000f, 2.500000f));
		Params.push_back(ShaderParam("lcd_gamma", 0, 68, 4, 1.000000f, 5.000000f, 2.200000f));
		Params.push_back(ShaderParam("levels_contrast", 0, 72, 4, 0.000000f, 4.000000f, 1.000000f));
		Params.push_back(ShaderParam("halation_weight", 0, 76, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("diffusion_weight", 0, 80, 4, 0.000000f, 1.000000f, 0.075000f));
		Params.push_back(ShaderParam("bloom_underestimate_levels", 0, 84, 4, 0.000000f, 5.000000f, 0.800000f));
		Params.push_back(ShaderParam("bloom_excess", 0, 88, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("beam_min_sigma", 0, 92, 4, 0.005000f, 1.000000f, 0.020000f));
		Params.push_back(ShaderParam("beam_max_sigma", 0, 96, 4, 0.005000f, 1.000000f, 0.300000f));
		Params.push_back(ShaderParam("beam_spot_power", 0, 100, 4, 0.010000f, 16.000000f, 0.330000f));
		Params.push_back(ShaderParam("beam_min_shape", 0, 104, 4, 2.000000f, 32.000000f, 2.000000f));
		Params.push_back(ShaderParam("beam_max_shape", 0, 108, 4, 2.000000f, 32.000000f, 4.000000f));
		Params.push_back(ShaderParam("beam_shape_power", 0, 112, 4, 0.010000f, 16.000000f, 0.250000f));
		Params.push_back(ShaderParam("beam_horiz_filter", 0, 116, 4, 0.000000f, 2.000000f, 0.000000f));
		Params.push_back(ShaderParam("beam_horiz_sigma", 0, 120, 4, 0.000000f, 0.670000f, 0.350000f));
		Params.push_back(ShaderParam("beam_horiz_linear_rgb_weight", 0, 124, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("convergence_offset_x_r", 0, 128, 4, -4.000000f, 4.000000f, 0.000000f));
		Params.push_back(ShaderParam("convergence_offset_x_g", 0, 132, 4, -4.000000f, 4.000000f, 0.000000f));
		Params.push_back(ShaderParam("convergence_offset_x_b", 0, 136, 4, -4.000000f, 4.000000f, 0.000000f));
		Params.push_back(ShaderParam("convergence_offset_y_r", 0, 140, 4, -2.000000f, 2.000000f, 0.000000f));
		Params.push_back(ShaderParam("convergence_offset_y_g", 0, 144, 4, -2.000000f, 2.000000f, 0.000000f));
		Params.push_back(ShaderParam("convergence_offset_y_b", 0, 148, 4, -2.000000f, 2.000000f, 0.000000f));
		Params.push_back(ShaderParam("mask_type", 0, 152, 4, 0.000000f, 2.000000f, 1.000000f));
		Params.push_back(ShaderParam("mask_sample_mode_desired", 0, 156, 4, 0.000000f, 2.000000f, 0.000000f));
		Params.push_back(ShaderParam("mask_specify_num_triads", 0, 168, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("mask_triad_size_desired", 0, 164, 4, 1.000000f, 18.000000f, 3.000000f));
		Params.push_back(ShaderParam("mask_num_triads_desired", 0, 160, 4, 342.000000f, 1920.000000f, 480.000000f));
		Params.push_back(ShaderParam("aa_subpixel_r_offset_x_runtime", 0, 172, 4, -0.333333f, 0.333333f, -0.333333f));
		Params.push_back(ShaderParam("aa_subpixel_r_offset_y_runtime", 0, 176, 4, -0.333333f, 0.333333f, 0.000000f));
		Params.push_back(ShaderParam("aa_cubic_c", 0, 180, 4, 0.000000f, 4.000000f, 0.500000f));
		Params.push_back(ShaderParam("aa_gauss_sigma", 0, 184, 4, 0.062500f, 1.000000f, 0.500000f));
		Params.push_back(ShaderParam("geom_mode_runtime", 0, 188, 4, 0.000000f, 3.000000f, 0.000000f));
		Params.push_back(ShaderParam("geom_radius", 0, 192, 4, 0.160000f, 1024.000000f, 2.000000f));
		Params.push_back(ShaderParam("geom_view_dist", 0, 196, 4, 0.500000f, 1024.000000f, 2.000000f));
		Params.push_back(ShaderParam("geom_tilt_angle_x", 0, 200, 4, -3.141593f, 3.141593f, 0.000000f));
		Params.push_back(ShaderParam("geom_tilt_angle_y", 0, 204, 4, -3.141593f, 3.141593f, 0.000000f));
		Params.push_back(ShaderParam("geom_aspect_ratio_x", 0, 208, 4, 1.000000f, 512.000000f, 432.000000f));
		Params.push_back(ShaderParam("geom_aspect_ratio_y", 0, 212, 4, 1.000000f, 512.000000f, 329.000000f));
		Params.push_back(ShaderParam("geom_overscan_x", 0, 216, 4, 0.003906f, 4.000000f, 1.000000f));
		Params.push_back(ShaderParam("geom_overscan_y", 0, 220, 4, 0.003906f, 4.000000f, 1.000000f));
		Params.push_back(ShaderParam("border_size", 0, 224, 4, 0.000000f, 0.500000f, 0.015000f));
		Params.push_back(ShaderParam("border_darkness", 0, 228, 4, 0.000000f, 16.000000f, 2.000000f));
		Params.push_back(ShaderParam("border_compress", 0, 232, 4, 1.000000f, 64.000000f, 2.500000f));
		Params.push_back(ShaderParam("interlace_detect_toggle", 0, 244, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("interlace_bff", 0, 236, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("interlace_1080i", 0, 240, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("MASKED_SCANLINESSize", -1, 64, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("BLOOM_APPROXSize", -1, 80, 16, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("Source", 2));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
