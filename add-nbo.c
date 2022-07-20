#include <stdio.h>
#include <netinet/in.h>
#include <stdint.h>

void main(int argc, char * argv[])
{
	FILE * fp;
       
	uint32_t buffer1, buffer2, sum;

	fp = fopen(argv[1],"rb");
	fread(&buffer1,4,1,fp);
	fclose(fp);

	fp = fopen(argv[2],"rb");
	fread(&buffer2,4,1,fp);
	fclose(fp);
	
	buffer1 = ntohl(buffer1);
	buffer2 = ntohl(buffer2);

	printf("%d(0x%X) + ",buffer1, buffer1);
	printf("%d(0x%X) = ",buffer2, buffer2);
	sum = buffer1 + buffer2;
	printf("%d(0x%X)\n",sum , sum);

}
