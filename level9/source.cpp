#include <iostream>
#include <cstring>
#include <unistd.h>

class N
{
        private:
			char    annotation[100];
			int     nb;
        
        public:
			N(int x) : nb(x) {
                this->func = &N::operator+;
			}

			void setAnnotation(char *a) {
				memcpy(annotation, a, strlen(a));
			}

			virtual int operator+(N &r) {
				return nb + r.nb;
			}

			virtual int operator-(N &r) {
				return nb - r.nb
			}
};

int main(int ac, char **av)
{
	if (ac > 2)
        exit(1);
    
	N *a = new N(5);
	N *b = new N(6);
	N &c = *a, &d = *b;

	c.setAnnotation(argv[1]);

	return c + d;
}