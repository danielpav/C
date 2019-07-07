#define YES  1
#define NO  0

main() 
{
	int c, nl, nw, nc, inword;

	inword = NO;
	nc = nw = nl = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if ( c == ' ' || c == '\t' || c == '\n' )
			inword = NO;
		else if (inword == NO){
			inword = YES;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
