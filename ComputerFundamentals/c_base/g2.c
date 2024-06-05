int main(int argc, char *argv[]) {
	int *p = (void*)1; // ok
	*p = 1; //segmentation fault
}
