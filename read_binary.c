#include <stdio.h>
#include <netinet/in.h>


void main()
{
	FILE * fp;
       
	int buffer1, buffer2;

	fp = fopen("./thousand.bin","rb");
	fread(&buffer1,4,1,fp);
	printf("0x%X\n",buffer1);
	fclose(fp);

	fp = fopen("./five-hundred.bin","rb");
	fread(&buffer2,4,1,fp);
	printf("0x%X\n",buffer2);
	fclose(fp);
	
	printf("0x%X\n",ntohl(buffer1));
	printf("0x%X\n",ntohl(buffer2));
	printf("0x%X\n",ntohl(buffer1) + ntohl(buffer2));

}
