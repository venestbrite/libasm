#include "libasm.h"

int main()
{
  /* STRLEN*/
  printf("\nFT_STRLEN\n");
  char *test = "tre secondi";
  printf("Orig: %lu\n", strlen(test));
  printf("Mine: %d\n", ft_strlen(test));
  char *test2 = "ciao.ciao";
  printf("Orig: %lu\n", strlen(test2));
  printf("Mine: %d\n", ft_strlen(test2));
  char *test3 = "Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam eaque ipsa, quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt, explicabo. Nemo enim ipsam voluptatem, quia voluptas sit, aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos, qui ratione voluptatem sequi nesciunt, neque porro quisquam est, qui dolorem ipsum, quia dolor sit, amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt, ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit, qui in ea voluptate velit esse, quam nihil molestiae consequatur, vel illum, qui dolorem eum fugiat, quo voluptas nulla pariatur? [33] At vero eos et accusamus et iusto odio dignissimos ducimus, qui blanditiis praesentium voluptatum deleniti atque corrupti, quos dolores et quas molestias excepturi sint, obcaecati cupiditate non provident, similique sunt in culpa, qui officia deserunt mollitia animi, id est laborum et dolorum fuga. Et harum quidem rerum facilis est et expedita distinctio. Nam libero tempore, cum soluta nobis est eligendi optio, cumque nihil impedit, quo minus id, quod maxime placeat, facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet, ut et voluptates repudiandae sint et molestiae non recusandae. Itaque earum rerum hic tenetur a sapiente delectus, ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat.";
  printf("Orig: %lu\n", strlen(test3));
  printf("Mine: %d\n", ft_strlen(test3));
  char *test4 = "";
  printf("Orig: %lu\n", strlen(test4));
  printf("Mine: %d\n", ft_strlen(test4));
  char *test5 = "Giovanni vuole il cazzo di Stefano";
  printf("Orig: %lu\n", strlen(test5));
  printf("Mine: %d\n", ft_strlen(test5));

  /*STRCMP*/
  printf("\nFT_STRCMP\n");
  char *test1_1 = "";
  char *test1_2 = "piena";
  printf("Orig: %d\n", strcmp(test1_1, test1_2));
  printf("Mine: %d\n", ft_strcmp(test1_1, test1_2));
  char *test1_3 = "piena";
  char *test1_4 = "";
  printf("Orig: %d\n", strcmp(test1_3, test1_4));
  printf("Mine: %d\n", ft_strcmp(test1_3, test1_4));
  char *test1_5 = "";
  char *test1_6 = "";
  printf("Orig: %d\n", strcmp(test1_5, test1_6));
  printf("Mine: %d\n", ft_strcmp(test1_5, test1_6));
  char *test1_7 = "piena";
  char *test1_8 = "piena";
  printf("Orig: %d\n", strcmp(test1_7, test1_8));
  printf("Mine: %d\n", ft_strcmp(test1_7, test1_8));
  char *test1_9 = "piena piena piena";
  char *test1_10 = "piena";
  printf("Orig: %d\n", strcmp(test1_9, test1_10));
  printf("Mine: %d\n", ft_strcmp(test1_9, test1_10));

  /*STRCOPY*/
  printf("\nFT_STRCPY\n");
  char dst[100] = "fdgddrtdklrhtdkre";
  char *src = "piena";
  printf("\nOrig: %s\n", strcpy(dst, src));
  printf("Mine: %s\n", ft_strcpy(dst, src));
  char *src3 = "";
  char dst4[100] = "piena";
  printf("Orig: %s\n", strcpy(dst4, src3));
  printf("Mine: %s\n", ft_strcpy(dst4, src3));
  char *src5 = "";
  char dst6[100] = "";
  printf("Orig: %s\n", strcpy(dst6, src5));
  printf("Mine: %s\n", ft_strcpy(dst6, src5));
  char *src7 = "stefano";
  char dst8[100] = "iaa";
  printf("Orig: %s\n", strcpy(dst8, src7));
  printf("Mine: %s\n", ft_strcpy(dst8, src7));
  char *src9 = "piena";
  char dst10[100] = "piena";
  printf("Orig: %s\n", strcpy(dst10, src9));
  printf("Mine: %s\n", ft_strcpy(dst10, src9));

  /*FT_STRDUP*/
  printf("\nFT_STRDUP\n");
  char *test11 = "tre secondi";
  printf("Orig: %s\n", strdup(test11));
  printf("Mine: %s\n", ft_strdup(test11));
  char *test12 = "ciao.ciao";
  printf("Orig: %s\n", strdup(test12));
  printf("Mine: %s\n", ft_strdup(test12));
  char *test13 = "Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam eaque ipsa, quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt, explicabo. Nemo enim ipsam voluptatem, quia voluptas sit, aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos, qui ratione voluptatem sequi nesciunt, neque porro quisquam est, qui dolorem ipsum, quia dolor sit, amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt, ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit, qui in ea voluptate velit esse, quam nihil molestiae consequatur, vel illum, qui dolorem eum fugiat, quo voluptas nulla pariatur? [33] At vero eos et accusamus et iusto odio dignissimos ducimus, qui blanditiis praesentium voluptatum deleniti atque corrupti, quos dolores et quas molestias excepturi sint, obcaecati cupiditate non provident, similique sunt in culpa, qui officia deserunt mollitia animi, id est laborum et dolorum fuga. Et harum quidem rerum facilis est et expedita distinctio. Nam libero tempore, cum soluta nobis est eligendi optio, cumque nihil impedit, quo minus id, quod maxime placeat, facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet, ut et voluptates repudiandae sint et molestiae non recusandae. Itaque earum rerum hic tenetur a sapiente delectus, ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat.";
  printf("Orig: %s\n", strdup(test13));
  printf("Mine: %s\n", ft_strdup(test13));
  char *test14 = "";
  printf("Orig: %s\n", strdup(test14));
  printf("Mine: %s\n", ft_strdup(test14));
  char *test15 = "Giovanni vuole il cazzo di Stefano";
  printf("Orig: %s\n", strdup(test15));
  printf("Mine: %s\n", ft_strdup(test15));

  /*FT_WRITE*/
  printf("\nFT_WRITE\n");
  write(1, "ciao\n", 5);
  ft_write(1, "ciao\n", 5);
  write(1, "", 4);
  ft_write(1, "\n", 1);
  ft_write(1, "", 4);
  write(1, "\nciaorddfsbhjkadshjkadsbjkbdfjkshudfshudfsdfsjjkndfsbjkndfbjkdfsbjkdjfsbjkdsfbjkdsfjbkbjkdfsbjkdsfbjbdjsfbjkdfsbdfs\n", 50);
  ft_write(1, "\nciaorddfsbhjkadshjkadsbjkbdfjkshudfshudfsdfsjjkndfsbjkndfbjkdfsbjkdjfsbjkdsfbjkdsfjbkbjkdfsbjkdsfbjbdjsfbjkdfsbdfs\n", 50);
  write(1, "\n1\n", 3);
  ft_write(1, "1\n", 2);
  write(10, "ciao\n", 4);
  ft_write(10, "ciao\n", 4);
  write(1, ".'.'.'.'\n", 10);
  ft_write(1, ".'.'.'.'\n", 10);

  /*FT_READ*/
  printf("\nFT_READ\n");
  int fd = 0;
  char buffer[2000];
  char buff[2000];
  fd = open("ft_read.s", O_RDONLY);
  read(fd, buffer, 970);
  buffer[970] = '\0';
  printf("Orig: %s\n", buffer);
  printf("\n");
  close(fd);
  fd = open("ft_read.s", O_RDONLY);
  ft_read(fd, buff, 970);
  buff[970] = '\0';
  printf("Mine: %s\n", buff);
  printf("\n");
  close(fd);
  char buffer2[100];
  char buff2[100];
  fd = open("ft_strcmp.s", O_RDONLY);
  read(fd, buffer2, 90);
  buffer2[90] = '\0';
  printf("Orig: %s\n", buffer2);
  printf("\n");
  close(fd);
  fd = open("ft_strcmp.s", O_RDONLY);
  ft_read(fd, buff2, 90);
  buff2[90] = '\0';
  printf("Mine: %s\n", buff2);
  printf("\n");
  close(fd);
  char buffer3[10];
  char buff3[10];
  fd = open("ft_strdup.s", O_RDONLY);
  read(fd, buffer3, 8);
  buffer3[8] = 0;
  printf("Orig: %s\n", buffer3);
  printf("\n");
  close(fd);
  fd = open("ft_strdup.s", O_RDONLY);
  ft_read(fd, buff3, 8);
  buff3[8] = 0;
  printf("Mine: %s\n", buff3);
  printf("\n");
  close(fd);
}
