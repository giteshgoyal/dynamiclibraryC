int priority(char a)
    {
    if(a=='+'||a=='-')
        return 1;
    else if(a=='*'||a=='/')
        return 2;
    return 0;
}
