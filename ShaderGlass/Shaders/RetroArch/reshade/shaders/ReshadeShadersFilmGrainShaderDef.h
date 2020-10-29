/*
ShaderGlass shader reshade-shaders\FilmGrain imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/reshade/shaders/FilmGrain.slang
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArchReshadeShadersFilmGrainShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,29,148,
77,60,16,150,158,22,
233,205,70,203,43,204,
133,6,1,0,0,0,
208,4,0,0,5,0,
0,0,52,0,0,0,
128,2,0,0,204,2,
0,0,36,3,0,0,
52,4,0,0,82,68,
69,70,68,2,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
28,2,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
92,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,85,66,79,0,
92,0,0,0,5,0,
0,0,120,0,0,0,
128,0,0,0,0,0,
0,0,0,0,0,0,
64,1,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,84,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,120,1,
0,0,64,0,0,0,
16,0,0,0,0,0,
0,0,148,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,184,1,0,0,
80,0,0,0,16,0,
0,0,0,0,0,0,
148,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
204,1,0,0,96,0,
0,0,16,0,0,0,
0,0,0,0,148,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,222,1,
0,0,112,0,0,0,
4,0,0,0,0,0,
0,0,248,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,103,108,111,98,
97,108,95,77,86,80,
0,102,108,111,97,116,
52,120,52,0,2,0,
3,0,4,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
75,1,0,0,103,108,
111,98,97,108,95,79,
117,116,112,117,116,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,138,1,
0,0,103,108,111,98,
97,108,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,103,108,
111,98,97,108,95,83,
111,117,114,99,101,83,
105,122,101,0,103,108,
111,98,97,108,95,70,
114,97,109,101,67,111,
117,110,116,0,100,119,
111,114,100,0,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,240,1,0,0,
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
80,0,0,0,2,0,
0,0,8,0,0,0,
56,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,12,0,0,
65,0,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,1,0,
0,0,15,0,0,0,
84,69,88,67,79,79,
82,68,0,83,86,95,
80,111,115,105,116,105,
111,110,0,171,171,171,
83,72,69,88,8,1,
0,0,80,0,1,0,
66,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,4,0,0,0,
95,0,0,3,242,16,
16,0,0,0,0,0,
95,0,0,3,50,16,
16,0,1,0,0,0,
101,0,0,3,50,32,
16,0,0,0,0,0,
103,0,0,4,242,32,
16,0,1,0,0,0,
1,0,0,0,104,0,
0,2,1,0,0,0,
54,0,0,5,50,32,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,56,0,0,8,
242,0,16,0,0,0,
0,0,86,21,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
1,0,0,0,50,0,
0,10,242,0,16,0,
0,0,0,0,6,16,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,0,0,0,0,
70,14,16,0,0,0,
0,0,50,0,0,10,
242,0,16,0,0,0,
0,0,166,26,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
2,0,0,0,70,14,
16,0,0,0,0,0,
50,0,0,10,242,32,
16,0,1,0,0,0,
246,31,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,3,0,
0,0,70,14,16,0,
0,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,6,0,
0,0,1,0,0,0,
0,0,0,0,4,0,
0,0,4,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
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


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,158,217,
192,209,73,94,153,4,
155,91,36,28,123,59,
244,92,1,0,0,0,
176,9,0,0,5,0,
0,0,52,0,0,0,
40,4,0,0,92,4,
0,0,144,4,0,0,
20,9,0,0,82,68,
69,70,236,3,0,0,
2,0,0,0,220,0,
0,0,4,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
194,3,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
188,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,204,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,211,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
215,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,0,0,
0,0,95,83,111,117,
114,99,101,95,115,97,
109,112,108,101,114,0,
83,111,117,114,99,101,
0,85,66,79,0,80,
117,115,104,0,211,0,
0,0,5,0,0,0,
12,1,0,0,128,0,
0,0,0,0,0,0,
0,0,0,0,215,0,
0,0,4,0,0,0,
176,2,0,0,16,0,
0,0,0,0,0,0,
0,0,0,0,212,1,
0,0,0,0,0,0,
64,0,0,0,0,0,
0,0,232,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,12,2,0,0,
64,0,0,0,16,0,
0,0,0,0,0,0,
40,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
76,2,0,0,80,0,
0,0,16,0,0,0,
0,0,0,0,40,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,96,2,
0,0,96,0,0,0,
16,0,0,0,0,0,
0,0,40,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,114,2,0,0,
112,0,0,0,4,0,
0,0,2,0,0,0,
140,2,0,0,0,0,
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
0,0,0,0,223,1,
0,0,103,108,111,98,
97,108,95,79,117,116,
112,117,116,83,105,122,
101,0,102,108,111,97,
116,52,0,171,171,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,30,2,0,0,
103,108,111,98,97,108,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,103,108,111,98,
97,108,95,83,111,117,
114,99,101,83,105,122,
101,0,103,108,111,98,
97,108,95,70,114,97,
109,101,67,111,117,110,
116,0,100,119,111,114,
100,0,171,171,0,0,
19,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
132,2,0,0,80,3,
0,0,0,0,0,0,
4,0,0,0,2,0,
0,0,104,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,140,3,0,0,
4,0,0,0,4,0,
0,0,2,0,0,0,
104,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
156,3,0,0,8,0,
0,0,4,0,0,0,
2,0,0,0,104,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,168,3,
0,0,12,0,0,0,
4,0,0,0,2,0,
0,0,104,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,73,110,116,
101,110,115,105,116,121,
0,102,108,111,97,116,
0,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,97,3,
0,0,112,97,114,97,
109,115,95,86,97,114,
105,97,110,99,101,0,
112,97,114,97,109,115,
95,77,101,97,110,0,
112,97,114,97,109,115,
95,83,105,103,110,97,
108,84,111,78,111,105,
115,101,82,97,116,105,
111,0,77,105,99,114,
111,115,111,102,116,32,
40,82,41,32,72,76,
83,76,32,83,104,97,
100,101,114,32,67,111,
109,112,105,108,101,114,
32,49,48,46,49,0,
171,171,73,83,71,78,
44,0,0,0,1,0,
0,0,8,0,0,0,
32,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
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
69,88,124,4,0,0,
80,0,0,0,31,1,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
8,0,0,0,89,0,
0,4,70,142,32,0,
1,0,0,0,1,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,4,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
0,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,130,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
2,64,0,0,171,170,
170,190,171,170,170,190,
171,170,170,190,0,0,
0,0,0,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
47,0,0,6,130,0,
16,0,0,0,0,0,
58,0,16,128,129,0,
0,0,0,0,0,0,
56,0,0,8,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,128,32,0,
1,0,0,0,0,0,
0,0,25,0,0,5,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,49,0,
0,8,18,0,16,0,
1,0,0,0,58,128,
32,0,1,0,0,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
55,0,0,9,130,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,58,0,
16,0,0,0,0,0,
56,0,0,9,18,0,
16,0,1,0,0,0,
26,128,32,0,1,0,
0,0,0,0,0,0,
26,128,32,0,1,0,
0,0,0,0,0,0,
56,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,86,0,
0,6,18,0,16,0,
1,0,0,0,10,128,
32,0,0,0,0,0,
7,0,0,0,56,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,132,125,
24,61,15,0,0,10,
34,0,16,0,1,0,
0,0,70,16,16,0,
0,0,0,0,2,64,
0,0,57,214,79,65,
76,119,156,66,0,0,
0,0,0,0,0,0,
77,0,0,7,18,0,
16,0,2,0,0,0,
18,0,16,0,3,0,
0,0,26,0,16,0,
1,0,0,0,50,0,
0,9,34,0,16,0,
1,0,0,0,10,0,
16,0,2,0,0,0,
1,64,0,0,140,238,
42,71,10,0,16,0,
1,0,0,0,50,0,
0,10,18,0,16,0,
1,0,0,0,10,0,
16,0,3,0,0,0,
1,64,0,0,140,254,
81,71,10,0,16,128,
65,0,0,0,1,0,
0,0,26,0,0,5,
50,0,16,0,1,0,
0,0,70,0,16,0,
1,0,0,0,56,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,219,15,
201,64,77,0,0,6,
0,208,0,0,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,49,0,0,7,
66,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,1,64,
0,0,23,183,209,56,
55,0,0,9,34,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,1,64,0,0,
23,183,209,56,26,0,
16,0,1,0,0,0,
47,0,0,5,66,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,49,0,0,7,
34,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,1,64,
0,0,23,183,209,56,
56,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,1,64,0,0,
24,114,49,63,75,0,
0,6,66,0,16,0,
1,0,0,0,42,0,
16,128,65,0,0,0,
1,0,0,0,55,0,
0,9,34,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
1,64,0,0,219,15,
73,64,42,0,16,0,
1,0,0,0,56,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,50,0,0,10,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
42,128,32,0,1,0,
0,0,0,0,0,0,
0,0,0,9,18,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
128,63,10,128,32,128,
65,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,8,34,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
128,63,10,128,32,0,
1,0,0,0,0,0,
0,0,0,0,0,8,
18,0,16,0,1,0,
0,0,26,0,16,128,
65,0,0,0,1,0,
0,0,10,0,16,0,
1,0,0,0,50,0,
0,9,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,56,0,
0,7,114,32,16,0,
0,0,0,0,246,15,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,35,0,
0,0,4,0,0,0,
0,0,0,0,2,0,
0,0,27,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,2,0,
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
class ReshadeShadersFilmGrainShaderDef : public ShaderDef
{
public:
	ReshadeShadersFilmGrainShaderDef() : ShaderDef{}
	{
		Name = "FilmGrain";
		VertexByteCode = RetroArchReshadeShadersFilmGrainShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchReshadeShadersFilmGrainShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchReshadeShadersFilmGrainShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchReshadeShadersFilmGrainShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("Intensity", -1, 0, 4, 0.000000f, 1.000000f, 0.500000f));
		Params.push_back(ShaderParam("Variance", -1, 4, 4, 0.000000f, 1.000000f, 0.400000f));
		Params.push_back(ShaderParam("Mean", -1, 8, 4, 0.000000f, 1.000000f, 0.500000f));
		Params.push_back(ShaderParam("SignalToNoiseRatio", -1, 12, 4, 0.000000f, 16.000000f, 6.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", 0, 96, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", 0, 80, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", 0, 112, 4, 0.000000f, 0.000000f, 0.000000f));
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
