/*
ShaderGlass preset presets-tvout / tvout+ntsc-256px-composite imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/presets/tvout/tvout+ntsc-256px-composite.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsTvoutTvoutNtsc256pxCompositePresetDef : public PresetDef
{
public:
	PresetsTvoutTvoutNtsc256pxCompositePresetDef() : PresetDef{}
	{
		Name = "tvout+ntsc-256px-composite";
		Category = "presets-tvout";
	}

	virtual void Build() {
         	ShaderDefs.push_back(NtscShadersNtscPass1Composite3phaseShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("frame_count_mod", "2")
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "source")
.Param("scale_x", "1024")
.Param("scale_y", "1.000000"));
         	ShaderDefs.push_back(NtscShadersNtscPass23phaseShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "0.500000")
.Param("scale_y", "1.000000"));
         	ShaderDefs.push_back(CrtShadersTvoutTweaksShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000"));
         	ShaderDefs.push_back(MiscImageAdjustmentShaderDef()
.Param("float_framebuffer", "false"));
	}
};
}
