int main(int ac, char **av) {
	char str[40];
	int i;

	i = atoi(av[1]);
	if (i <= 9)
	{
		i = i*4;
		memcpy(str, av[2], i);
		if (i == 0x574f4c46)
			execl("/bin/sh", "sh");
		return 0;
	}
	return 1;
}