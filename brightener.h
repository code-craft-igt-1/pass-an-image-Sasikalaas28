#pragma once
#include <cstdint>
#include <memory>
using std::move;
using std::unique_ptr;

struct Image {
	int rows;
	int columns;
	uint8_t pixels[1024 * 1024]; // max 1k x 1k image
};

class ImageBrightener {
private:
	unique_ptr<Image> m_inputImage;
public:
	ImageBrightener(unique_ptr<Image>& inputImage);
	int BrightenWholeImage();
	unique_ptr<Image> GetImage();
};
