extern "C"
{
#include "libavcodec/avcodec.h"
}

int main()
{
	const char* configuration = avcodec_configuration();
	printf("FFmpeg file configuration: %s\n", configuration);
	return 0;
}
