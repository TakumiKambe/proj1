#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	char buff[10];
	int fd;
	fd = open("test.txt",O_RDONLY);
	if(fd < 0){
		perror("error");
		exit(1);
	}
	int val = read(fd,buff,10);
	if(val < 0){
		perror("error");
		exit(1);
	}
	if(write(1,buff,10) < 0){
		perror("error");
		exit(1);
	}
	close(fd);
	
	
}
