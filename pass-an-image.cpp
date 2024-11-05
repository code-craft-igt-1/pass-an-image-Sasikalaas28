#include <iostream>
#include "brightener.h"


int main() {
    unique_ptr<Image> image = unique_ptr<Image> (new Image);
    image->rows = 512;
    image->columns = 512;
	std::cout << "Brightening a 512 x 512 image\n";
    unique_ptr<ImageBrightener> brightener(new ImageBrightener(image));
    int attenuatedCount = brightener->BrightenWholeImage();
    std::cout << "Attenuated " << attenuatedCount << " pixels\n";
    return 0;
}
