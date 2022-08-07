#include "bbcp.h"

int main(int argc, char **argv)
{

    int         fd_in;
    int         fd_out;
    char        buff[BUFFER_SIZE];
    int         size;
    struct stat s;
    char        *path_out;


    // check the number of parameters 
    if (argc != 3)
        ft_exit("bbcp: wrong parameter number \n./bbcp <src> <dest>\n", 1);

    // check if dest exists
    if (stat(argv[2], &s) == 0)
    {
        // check if dest is a dir path
        if (s.st_mode & S_IFDIR)
        {
            path_out = ft_strrchr(argv[1], '/');
            if (path_out == NULL)
                path_out = argv[1];
            else
                path_out++;
            
            //construct the path by adding the name of the src to the dest dir path
            if (argv[2][ft_strlen(argv[2] - 1)] == '/')
            {
                path_out = ft_strjoin(argv[2], path_out);
                if (!path_out)
                    ft_exit("strjoint error !\n", 1);
            }
            else
            {
                char *p = ft_strjoin(argv[2], "/");
                path_out = ft_strjoin(p, path_out);
                if (!p || !path_out)
                    ft_exit("strjoint error !\n", 1);
                free(p);
            }
            fd_out = open(path_out, O_CREAT | O_RDWR, 0775);
            if (fd_out < 0)
                ft_exit(NULL, 1);
            free(path_out);
        }
        else
        {
            // if the file exists and is not a dir
            fd_out = open(argv[2], O_RDWR, 0775);
            if (fd_out < 0)
                ft_exit(NULL, 1);
        }
    }
    else
    {
        // if the does not exist 
        fd_out = open(argv[2], O_CREAT | O_RDWR, 0775);
        if (fd_out < 0)
            ft_exit(NULL, 1);
    }

    // open src file in read only mode
    fd_in = open(argv[1], O_RDONLY);
    if (fd_in < 0)
        ft_exit(NULL, 1);

    // read the content from one fd and write it to the other
    while ((size = read(fd_in, buff, BUFFER_SIZE)) > 0)
    {
        buff[size] = 0;
        write(fd_out, buff, size);
    }

    // close the files
    close(fd_in);
    close(fd_out);

    return (0);
}