// include all libraries needed
#include <stdio.h>
#include <limits.h>
#include <float.h>
void display_type_info(const char *type_name, size_t size, long long min_value, long long max_value)
{
    printf("Size of %s: %lu bytes\n", type_name, size);
    printf("Value range of %s: từ %lld đến %lld\n\n",type_name, min_value, max_value);
}

int main()
{

   char input[10];
    printf("Enter the data type name (or all to display all): ");
    scanf("%s", input);
    if (strcmp(input, "all") == 0)
    {
        // Hiển thị thông tin của kiểu dữ liệu int
        display_type_info("int", sizeof(int), INT_MIN, INT_MAX);

        // Hiển thị thông tin của kiểu dữ liệu float
        display_type_info("float", sizeof(float), (long long)FLT_MIN, (long long)FLT_MAX);

        // Hiển thị thông tin của kiểu dữ liệu double
        display_type_info("double", sizeof(double), (long long)DBL_MIN, (long long)DBL_MAX);

        // Hiển thị thông tin của kiểu dữ liệu char
        display_type_info("char", sizeof(char), CHAR_MIN, CHAR_MAX);
    }
    else if (strcmp(input, "int") == 0)
    {
        display_type_info("int", sizeof(int), INT_MIN, INT_MAX);
    }
    else if (strcmp(input, "float") == 0)
    {
        display_type_info("float", sizeof(float), (long long)FLT_MIN, (long long)FLT_MAX);
    }
    else if (strcmp(input, "double") == 0)
    {
        display_type_info("double", sizeof(double), (long long)DBL_MIN, (long long)DBL_MAX);
    }
    else if (strcmp(input, "char") == 0)
    {
        display_type_info("char", sizeof(char), CHAR_MIN, CHAR_MAX);
    }
    else
    {
        printf("Không tìm thấy thông tin cho kiểu dữ liệu %s\n", input);
    }

    return 0;
}