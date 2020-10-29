/*
ShaderGlass shader interpolation-shaders\pixellate imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/interpolation/shaders/pixellate.slang
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArchInterpolationShadersPixellateShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,199,139,
217,60,151,216,199,142,
150,227,163,16,115,164,
74,122,1,0,0,0,
224,4,0,0,5,0,
0,0,52,0,0,0,
144,2,0,0,220,2,
0,0,52,3,0,0,
68,4,0,0,82,68,
69,70,84,2,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
44,2,0,0,82,68,
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
0,0,8,2,0,0,
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
111,98,97,108,95,73,
78,84,69,82,80,79,
76,65,84,69,95,73,
78,95,76,73,78,69,
65,82,95,71,65,77,
77,65,0,102,108,111,
97,116,0,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,2,0,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,73,83,71,78,
68,0,0,0,2,0,
0,0,8,0,0,0,
56,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,15,15,0,0,
56,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,3,3,0,0,
84,69,88,67,79,79,
82,68,0,171,171,171,
79,83,71,78,80,0,
0,0,2,0,0,0,
8,0,0,0,56,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,12,0,0,65,0,
0,0,0,0,0,0,
1,0,0,0,3,0,
0,0,1,0,0,0,
15,0,0,0,84,69,
88,67,79,79,82,68,
0,83,86,95,80,111,
115,105,116,105,111,110,
0,171,171,171,83,72,
69,88,8,1,0,0,
80,0,1,0,66,0,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
4,0,0,0,95,0,
0,3,242,16,16,0,
0,0,0,0,95,0,
0,3,50,16,16,0,
1,0,0,0,101,0,
0,3,50,32,16,0,
0,0,0,0,103,0,
0,4,242,32,16,0,
1,0,0,0,1,0,
0,0,104,0,0,2,
1,0,0,0,54,0,
0,5,50,32,16,0,
0,0,0,0,70,16,
16,0,1,0,0,0,
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
1,0,0,0,246,31,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,3,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,6,0,0,0,
1,0,0,0,0,0,
0,0,4,0,0,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
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
0,0,0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,161,212,
66,95,230,88,207,24,
98,254,181,162,84,171,
151,19,1,0,0,0,
160,12,0,0,5,0,
0,0,52,0,0,0,
232,2,0,0,28,3,
0,0,80,3,0,0,
4,12,0,0,82,68,
69,70,172,2,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
132,2,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
156,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,172,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,179,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
95,83,111,117,114,99,
101,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,85,
66,79,0,171,179,0,
0,0,5,0,0,0,
208,0,0,0,128,0,
0,0,0,0,0,0,
0,0,0,0,152,1,
0,0,0,0,0,0,
64,0,0,0,0,0,
0,0,172,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,208,1,0,0,
64,0,0,0,16,0,
0,0,2,0,0,0,
236,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
16,2,0,0,80,0,
0,0,16,0,0,0,
0,0,0,0,236,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,36,2,
0,0,96,0,0,0,
16,0,0,0,2,0,
0,0,236,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,54,2,0,0,
112,0,0,0,4,0,
0,0,2,0,0,0,
96,2,0,0,0,0,
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
0,0,0,0,163,1,
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
0,0,226,1,0,0,
103,108,111,98,97,108,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,103,108,111,98,
97,108,95,83,111,117,
114,99,101,83,105,122,
101,0,103,108,111,98,
97,108,95,73,78,84,
69,82,80,79,76,65,
84,69,95,73,78,95,
76,73,78,69,65,82,
95,71,65,77,77,65,
0,102,108,111,97,116,
0,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,89,2,
0,0,77,105,99,114,
111,115,111,102,116,32,
40,82,41,32,72,76,
83,76,32,83,104,97,
100,101,114,32,67,111,
109,112,105,108,101,114,
32,49,48,46,49,0,
73,83,71,78,44,0,
0,0,1,0,0,0,
8,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,3,0,0,84,69,
88,67,79,79,82,68,
0,171,171,171,79,83,
71,78,44,0,0,0,
1,0,0,0,8,0,
0,0,32,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,15,0,
0,0,83,86,95,84,
97,114,103,101,116,0,
171,171,83,72,69,88,
172,8,0,0,80,0,
0,0,43,2,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,8,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,7,0,
0,0,56,0,0,9,
50,0,16,0,0,0,
0,0,22,133,32,0,
0,0,0,0,4,0,
0,0,22,133,32,0,
0,0,0,0,6,0,
0,0,14,0,0,8,
50,0,16,0,0,0,
0,0,22,133,32,0,
0,0,0,0,6,0,
0,0,70,0,16,0,
0,0,0,0,56,0,
0,8,66,0,16,0,
0,0,0,0,10,0,
16,128,129,0,0,0,
0,0,0,0,1,64,
0,0,119,190,255,62,
50,0,0,13,194,0,
16,0,1,0,0,0,
6,4,16,128,129,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
119,190,255,62,119,190,
255,62,86,17,16,0,
0,0,0,0,50,0,
0,13,50,0,16,0,
1,0,0,0,22,5,
16,128,193,0,0,0,
0,0,0,0,2,64,
0,0,119,190,255,62,
119,190,255,62,0,0,
0,0,0,0,0,0,
70,16,16,0,0,0,
0,0,49,0,0,8,
18,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,10,128,
32,0,0,0,0,0,
7,0,0,0,31,0,
4,3,10,0,16,0,
0,0,0,0,14,0,
0,8,242,0,16,0,
2,0,0,0,134,7,
16,0,1,0,0,0,
230,142,32,0,0,0,
0,0,6,0,0,0,
65,0,0,5,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,0,0,0,10,
242,0,16,0,2,0,
0,0,70,14,16,0,
2,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,63,
56,0,0,8,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,230,142,32,0,
0,0,0,0,6,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,70,0,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,47,0,
0,5,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
56,0,0,10,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,2,64,0,0,
205,204,12,64,205,204,
12,64,205,204,12,64,
0,0,0,0,25,0,
0,5,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,2,0,
0,0,230,10,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,47,0,0,5,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,56,0,
0,10,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,205,204,
12,64,205,204,12,64,
205,204,12,64,0,0,
0,0,25,0,0,5,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,14,0,
0,8,242,0,16,0,
4,0,0,0,70,11,
16,0,1,0,0,0,
230,142,32,0,0,0,
0,0,6,0,0,0,
65,0,0,5,242,0,
16,0,4,0,0,0,
70,14,16,0,4,0,
0,0,0,0,0,10,
242,0,16,0,4,0,
0,0,70,14,16,0,
4,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,63,
56,0,0,8,242,0,
16,0,4,0,0,0,
70,14,16,0,4,0,
0,0,230,142,32,0,
0,0,0,0,6,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,70,0,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,47,0,
0,5,114,0,16,0,
5,0,0,0,70,2,
16,0,5,0,0,0,
56,0,0,10,114,0,
16,0,5,0,0,0,
70,2,16,0,5,0,
0,0,2,64,0,0,
205,204,12,64,205,204,
12,64,205,204,12,64,
0,0,0,0,25,0,
0,5,114,0,16,0,
5,0,0,0,70,2,
16,0,5,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,4,0,
0,0,230,10,16,0,
4,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,47,0,0,5,
114,0,16,0,4,0,
0,0,70,2,16,0,
4,0,0,0,56,0,
0,10,114,0,16,0,
4,0,0,0,70,2,
16,0,4,0,0,0,
2,64,0,0,205,204,
12,64,205,204,12,64,
205,204,12,64,0,0,
0,0,25,0,0,5,
114,0,16,0,4,0,
0,0,70,2,16,0,
4,0,0,0,18,0,
0,1,14,0,0,8,
242,0,16,0,6,0,
0,0,134,7,16,0,
1,0,0,0,230,142,
32,0,0,0,0,0,
6,0,0,0,65,0,
0,5,242,0,16,0,
6,0,0,0,70,14,
16,0,6,0,0,0,
0,0,0,10,242,0,
16,0,6,0,0,0,
70,14,16,0,6,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,63,56,0,
0,8,242,0,16,0,
6,0,0,0,70,14,
16,0,6,0,0,0,
230,142,32,0,0,0,
0,0,6,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,3,0,
0,0,70,0,16,0,
6,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,230,10,
16,0,6,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,14,0,
0,8,242,0,16,0,
6,0,0,0,70,11,
16,0,1,0,0,0,
230,142,32,0,0,0,
0,0,6,0,0,0,
65,0,0,5,242,0,
16,0,6,0,0,0,
70,14,16,0,6,0,
0,0,0,0,0,10,
242,0,16,0,6,0,
0,0,70,14,16,0,
6,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,63,
56,0,0,8,242,0,
16,0,6,0,0,0,
70,14,16,0,6,0,
0,0,230,142,32,0,
0,0,0,0,6,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,70,0,
16,0,6,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
230,10,16,0,6,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
21,0,0,1,14,0,
0,8,50,0,16,0,
6,0,0,0,22,21,
16,0,0,0,0,0,
182,143,32,0,0,0,
0,0,6,0,0,0,
64,0,0,5,50,0,
16,0,6,0,0,0,
70,0,16,0,6,0,
0,0,56,0,0,8,
50,0,16,0,6,0,
0,0,70,0,16,0,
6,0,0,0,182,143,
32,0,0,0,0,0,
6,0,0,0,52,0,
0,7,50,0,16,0,
6,0,0,0,22,5,
16,0,1,0,0,0,
70,0,16,0,6,0,
0,0,51,0,0,7,
50,0,16,0,6,0,
0,0,230,10,16,0,
1,0,0,0,70,0,
16,0,6,0,0,0,
56,0,0,8,34,0,
16,0,0,0,0,0,
26,0,16,128,129,0,
0,0,0,0,0,0,
42,0,16,0,0,0,
0,0,56,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,119,190,255,63,
0,0,0,8,194,0,
16,0,0,0,0,0,
6,4,16,128,65,0,
0,0,1,0,0,0,
86,1,16,0,6,0,
0,0,0,0,0,8,
50,0,16,0,1,0,
0,0,230,10,16,0,
1,0,0,0,70,0,
16,128,65,0,0,0,
6,0,0,0,56,0,
0,7,194,0,16,0,
1,0,0,0,166,14,
16,0,0,0,0,0,
6,4,16,0,1,0,
0,0,14,0,0,7,
194,0,16,0,1,0,
0,0,166,14,16,0,
1,0,0,0,86,5,
16,0,0,0,0,0,
56,0,0,7,114,0,
16,0,2,0,0,0,
246,15,16,0,1,0,
0,0,70,2,16,0,
2,0,0,0,50,0,
0,9,114,0,16,0,
2,0,0,0,70,2,
16,0,3,0,0,0,
166,10,16,0,1,0,
0,0,70,2,16,0,
2,0,0,0,56,0,
0,7,66,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,14,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
50,0,0,9,114,0,
16,0,2,0,0,0,
70,2,16,0,5,0,
0,0,166,10,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
56,0,0,7,66,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,14,0,
0,7,34,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,50,0,0,9,
226,0,16,0,0,0,
0,0,6,9,16,0,
4,0,0,0,86,5,
16,0,0,0,0,0,
6,9,16,0,2,0,
0,0,47,0,0,5,
114,0,16,0,1,0,
0,0,150,7,16,0,
0,0,0,0,56,0,
0,10,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,47,186,
232,62,47,186,232,62,
47,186,232,62,0,0,
0,0,25,0,0,5,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,55,0,
0,9,114,32,16,0,
0,0,0,0,6,0,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,150,7,16,0,
0,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
62,0,0,1,83,84,
65,84,148,0,0,0,
70,0,0,0,7,0,
0,0,0,0,0,0,
2,0,0,0,56,0,
0,0,0,0,0,0,
0,0,0,0,2,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,8,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
5,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0
};

}

namespace RetroArch
{
class InterpolationShadersPixellateShaderDef : public ShaderDef
{
public:
	InterpolationShadersPixellateShaderDef() : ShaderDef{}
	{
		Name = "pixellate";
		VertexByteCode = RetroArchInterpolationShadersPixellateShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchInterpolationShadersPixellateShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchInterpolationShadersPixellateShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchInterpolationShadersPixellateShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("INTERPOLATE_IN_LINEAR_GAMMA", 0, 112, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", 0, 96, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", 0, 80, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f));
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
