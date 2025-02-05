void myString(char*& c,int N){
	c = new char[N+1];    
	for(int i = 0; i < N;i++) c[i] = 'A'+i;
	c[N]= 0;
}