#include<cstdio>
#include<string>

using namespace std;

int parse(char *s) {
	int temp = 0;
	for(int i=0; i<11; i++) {
		temp |= (s[i] == 'o');
		if(s[i] == '.' || s[i] == '|')
			continue;
		temp = temp << 1;
	}
	return temp>>1;

}

int main() {
	char temp[100], tmp=0;
	while(fgets(temp, 98, stdin)) {
		if(temp[0] == '-')
			continue;
		tmp = (char) parse(temp);
		if(tmp != 0)
			printf("%c", tmp);
	}
	printf("\n");
	return 0;
}
