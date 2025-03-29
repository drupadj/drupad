
#define OUT 0
#define IN  1

int countStringWords(char *str)
{
    int state = OUT;
     int wc = 0;

    while(*str)
    {
        if (*str == '\n' || *str == '\t' || *str == '')
	{
		state = OUT;
	}
	else if (state = OUT)
	{
            wc++;
	    state = IN;
	}
	++str;
    }

    return wc;
}
