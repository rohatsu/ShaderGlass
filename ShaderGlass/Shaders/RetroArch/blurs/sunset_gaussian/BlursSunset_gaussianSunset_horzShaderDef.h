/*
ShaderGlass shader blurs-sunset_gaussian\sunset_horz imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/blurs/sunset_gaussian/sunset_horz.slang
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArchBlursSunset_gaussianSunset_horzShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,230,140,
225,1,229,117,182,47,
53,66,177,179,215,83,
92,188,1,0,0,0,
192,6,0,0,5,0,
0,0,52,0,0,0,
192,2,0,0,12,3,
0,0,220,3,0,0,
36,6,0,0,82,68,
69,70,132,2,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
92,2,0,0,82,68,
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
0,0,1,0,0,0,
184,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,128,0,
0,0,4,0,0,0,
24,1,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,224,0,
0,0,0,0,0,0,
64,0,0,0,2,0,
0,0,244,0,0,0,
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
235,0,0,0,184,1,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,212,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,248,1,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
212,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
12,2,0,0,32,0,
0,0,16,0,0,0,
2,0,0,0,212,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,30,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,56,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,83,111,117,
114,99,101,83,105,122,
101,0,102,108,111,97,
116,52,0,171,171,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,202,1,0,0,
112,97,114,97,109,115,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,112,97,114,97,
109,115,95,79,117,116,
112,117,116,83,105,122,
101,0,112,97,114,97,
109,115,95,70,114,97,
109,101,67,111,117,110,
116,0,100,119,111,114,
100,0,171,171,0,0,
19,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
48,2,0,0,77,105,
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
79,83,71,78,200,0,
0,0,7,0,0,0,
8,0,0,0,176,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,12,0,0,176,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
3,12,0,0,176,0,
0,0,2,0,0,0,
0,0,0,0,3,0,
0,0,2,0,0,0,
3,12,0,0,176,0,
0,0,3,0,0,0,
0,0,0,0,3,0,
0,0,3,0,0,0,
3,12,0,0,176,0,
0,0,4,0,0,0,
0,0,0,0,3,0,
0,0,4,0,0,0,
3,12,0,0,176,0,
0,0,5,0,0,0,
0,0,0,0,3,0,
0,0,5,0,0,0,
3,12,0,0,185,0,
0,0,0,0,0,0,
1,0,0,0,3,0,
0,0,6,0,0,0,
15,0,0,0,84,69,
88,67,79,79,82,68,
0,83,86,95,80,111,
115,105,116,105,111,110,
0,171,171,171,83,72,
69,88,64,2,0,0,
80,0,1,0,144,0,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
4,0,0,0,89,0,
0,4,70,142,32,0,
1,0,0,0,3,0,
0,0,95,0,0,3,
242,16,16,0,0,0,
0,0,95,0,0,3,
50,16,16,0,1,0,
0,0,101,0,0,3,
50,32,16,0,0,0,
0,0,101,0,0,3,
50,32,16,0,1,0,
0,0,101,0,0,3,
50,32,16,0,2,0,
0,0,101,0,0,3,
50,32,16,0,3,0,
0,0,101,0,0,3,
50,32,16,0,4,0,
0,0,101,0,0,3,
50,32,16,0,5,0,
0,0,103,0,0,4,
242,32,16,0,6,0,
0,0,1,0,0,0,
104,0,0,2,1,0,
0,0,54,0,0,5,
50,32,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,54,0,
0,5,50,32,16,0,
1,0,0,0,70,16,
16,0,1,0,0,0,
50,0,0,13,50,32,
16,0,2,0,0,0,
230,138,32,0,1,0,
0,0,2,0,0,0,
2,64,0,0,125,35,
180,63,0,0,0,0,
0,0,0,0,0,0,
0,0,70,16,16,0,
1,0,0,0,50,0,
0,14,50,32,16,0,
3,0,0,0,230,138,
32,128,65,0,0,0,
1,0,0,0,2,0,
0,0,2,64,0,0,
125,35,180,63,0,0,
0,0,0,0,0,0,
0,0,0,0,70,16,
16,0,1,0,0,0,
50,0,0,13,50,32,
16,0,4,0,0,0,
230,138,32,0,1,0,
0,0,2,0,0,0,
2,64,0,0,107,212,
82,64,0,0,0,0,
0,0,0,0,0,0,
0,0,70,16,16,0,
1,0,0,0,50,0,
0,14,50,32,16,0,
5,0,0,0,230,138,
32,128,65,0,0,0,
1,0,0,0,2,0,
0,0,2,64,0,0,
107,212,82,64,0,0,
0,0,0,0,0,0,
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
6,0,0,0,246,31,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,3,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,11,0,0,0,
1,0,0,0,0,0,
0,0,9,0,0,0,
8,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
2,0,0,0,0,0,
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
68,88,66,67,54,101,
2,176,191,209,145,10,
65,249,87,179,87,198,
45,201,1,0,0,0,
188,4,0,0,5,0,
0,0,52,0,0,0,
248,0,0,0,164,1,
0,0,216,1,0,0,
32,4,0,0,82,68,
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
164,0,0,0,6,0,
0,0,8,0,0,0,
152,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
152,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,3,3,0,0,
152,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,3,3,0,0,
152,0,0,0,3,0,
0,0,0,0,0,0,
3,0,0,0,3,0,
0,0,3,3,0,0,
152,0,0,0,4,0,
0,0,0,0,0,0,
3,0,0,0,4,0,
0,0,3,3,0,0,
152,0,0,0,5,0,
0,0,0,0,0,0,
3,0,0,0,5,0,
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
69,88,64,2,0,0,
80,0,0,0,144,0,
0,0,106,8,0,1,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
1,0,0,0,98,16,
0,3,50,16,16,0,
2,0,0,0,98,16,
0,3,50,16,16,0,
3,0,0,0,98,16,
0,3,50,16,16,0,
4,0,0,0,98,16,
0,3,50,16,16,0,
5,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,0,0,
0,0,70,16,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,56,0,0,10,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,2,64,
0,0,139,166,155,62,
139,166,155,62,139,166,
155,62,139,166,155,62,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,1,0,
0,0,70,16,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,50,0,0,12,
242,0,16,0,0,0,
0,0,70,14,16,0,
1,0,0,0,2,64,
0,0,94,16,81,62,
94,16,81,62,94,16,
81,62,94,16,81,62,
70,14,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
1,0,0,0,70,16,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,50,0,
0,12,242,0,16,0,
0,0,0,0,70,14,
16,0,1,0,0,0,
2,64,0,0,139,166,
155,62,139,166,155,62,
139,166,155,62,139,166,
155,62,70,14,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,1,0,0,0,
70,16,16,0,4,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
50,0,0,12,242,0,
16,0,0,0,0,0,
70,14,16,0,1,0,
0,0,2,64,0,0,
117,85,192,61,117,85,
192,61,117,85,192,61,
117,85,192,61,70,14,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,1,0,
0,0,70,16,16,0,
5,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,50,0,0,12,
242,32,16,0,0,0,
0,0,70,14,16,0,
1,0,0,0,2,64,
0,0,117,85,192,61,
117,85,192,61,117,85,
192,61,117,85,192,61,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,11,0,0,0,
2,0,0,0,0,0,
0,0,6,0,0,0,
5,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,5,0,
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
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0
};

}

namespace RetroArch
{
class BlursSunset_gaussianSunset_horzShaderDef : public ShaderDef
{
public:
	BlursSunset_gaussianSunset_horzShaderDef() : ShaderDef{}
	{
		Name = "sunset_horz";
		VertexByteCode = RetroArchBlursSunset_gaussianSunset_horzShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchBlursSunset_gaussianSunset_horzShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchBlursSunset_gaussianSunset_horzShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchBlursSunset_gaussianSunset_horzShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f));
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
