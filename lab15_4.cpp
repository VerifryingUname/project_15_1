#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line
void shuffle(int &x, int &y, int &z, int &w) {
    int ID[] = {0, 1, 2, 3};
    int Red_envelope[] = {x, y, z, w};
    int shuffled[4];
    for (int i = 0; i < 4; ++i) {
        int random = rand() % (4 - i);
        shuffled[i] = Red_envelope[ID[random]];
        for (int j = random; j < 3 - i; ++j) {
            ID[j] = ID[j + 1];
        }
    }
    x = shuffled[0];
    y = shuffled[1];
    z = shuffled[2];
    w = shuffled[3];
}
