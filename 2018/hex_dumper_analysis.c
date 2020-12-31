char O;
char o[];
main(){
	int l = 0;
	while(l != -1) {
		l = getchar();
		if (l != -1){
			if (l >= 32){ //printable character
				O[o] = l;
			} 
			else { //unprintable character is replaced to .
				O[o] = 46;
			}
		} 
		else { // EOF is replaced to NULL
			O[o] = 0;
		}

		if (O[o] != 0){
			printf("%02x ",l);
			O = (O+1) % 16;
			// O = - 1 & printf("%02x ",l)*5;
		} 
		else {
			O = 0;
			// O = !O;
		}

		if (!O){
			puts(o);
		}
	}
}
