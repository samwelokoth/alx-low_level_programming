int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1; // Alphabetic character
    }

    return 0; // Not an alphabetic character
}

