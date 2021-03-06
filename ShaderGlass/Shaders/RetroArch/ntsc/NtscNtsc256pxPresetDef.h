/*
ShaderGlass preset ntsc / ntsc-256px imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/ntsc/ntsc-256px.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class NtscNtsc256pxPresetDef : public PresetDef
{
public:
	NtscNtsc256pxPresetDef() : PresetDef{}
	{
		Name = "ntsc-256px";
		Category = "ntsc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(NtscShadersNtscPass1Composite3phaseShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("frame_count_mod", "2")
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "source")
.Param("scale_x", "1024")
.Param("scale_y", "1.0"));
         	ShaderDefs.push_back(NtscShadersNtscPass23phaseGammaShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source")
.Param("scale_x", "0.5")
.Param("scale_y", "1.0"));
	}
};
}
