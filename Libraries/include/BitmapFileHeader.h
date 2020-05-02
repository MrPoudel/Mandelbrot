#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

#include <cstdint> // c-standard integer.

using namespace std;

namespace caveofprogramming {

#pragma pack(push, 2)

struct BitmapFileHeader {
	char header[2]{'B', 'M'};
	int32_t fileSize;
	int32_t reserved{0}; // Not used
	int32_t dataOffset;
};

#pragma pack(pop)

}



#endif /* BITMAPFILEHEADER_H_ */
