#include<iostream>
int main(){
	int a,b;
	int oper;
	std::cin>>oper;
	std::cin>>a;
	std::cin>>b;
	switch(oper)
	{ case 1:
		std:: cout<<"a+b="<< a + b;
		break;
		case 2:
			std:: cout<<"a-b="<<a-b;
			break;
			case 3:
				std::cout<<"a*b"<<a*b;
				break;
				case 4:
						std::cout<<"a/b"<<a/b;
						break;
						case 5:
								std::cout<<"a%b"<<a%b;
								break;
	}
	return 0;
}

