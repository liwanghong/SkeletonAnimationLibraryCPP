#ifndef __TEXTURE_ATLAS_DATA_H__
#define __TEXTURE_ATLAS_DATA_H__
#include "BytesType.h"
#include "Rectangle.h"
namespace dragonBones
{    
    class TextureAtlasData
    {
    public:
        TextureAtlasData()
        {

        }
        typedef std::map<String , Rectangle> Rects;
		String name;
        String imagePath;
        Rects rects;

        void addRect(const String &name , const Rectangle &rect)
        {
            rects[name] = rect;
        }
    };
};
#endif // __TEXTURE_ATLAS_DATA_H__
