#include "asset.h"

namespace VI
{

AssetID const Asset::Model::Alpha = 0;
AssetID const Asset::Model::city1 = 1;
AssetID const Asset::Model::city2 = 2;
AssetID const Asset::Model::city3 = 3;
AssetID const Asset::Model::city4 = 4;
AssetID const Asset::Model::cube = 5;

const char* Asset::Model::filenames[] =
{
	"assets/Alpha.mdl",
	"assets/city1.mdl",
	"assets/city2.mdl",
	"assets/city3.mdl",
	"assets/city4.mdl",
	"assets/cube.mdl",
};

AssetID const Asset::Texture::test = 0;

const char* Asset::Texture::filenames[] =
{
	"assets/test.png",
};

AssetID const Asset::Shader::Armature = 0;
AssetID const Asset::Shader::Standard = 1;
AssetID const Asset::Shader::UI = 2;

const char* Asset::Shader::filenames[] =
{
	"assets/Armature.glsl",
	"assets/Standard.glsl",
	"assets/UI.glsl",
};

AssetID const Asset::Animation::walk = 0;

const char* Asset::Animation::filenames[] =
{
	"assets/walk.anm",
};

AssetID const Asset::Uniform::Bones = 0;
AssetID const Asset::Uniform::LightPosition_worldspace = 1;
AssetID const Asset::Uniform::M = 2;
AssetID const Asset::Uniform::MVP = 3;
AssetID const Asset::Uniform::V = 4;
AssetID const Asset::Uniform::myTextureSampler = 5;

const char* Asset::Uniform::filenames[] =
{
	"Bones",
	"LightPosition_worldspace",
	"M",
	"MVP",
	"V",
	"myTextureSampler",
};

AssetID const Asset::Font::SegoeUISymbol = 0;
AssetID const Asset::Font::lowpoly = 1;

const char* Asset::Font::filenames[] =
{
	"assets/SegoeUISymbol.fnt",
	"assets/lowpoly.fnt",
};



}