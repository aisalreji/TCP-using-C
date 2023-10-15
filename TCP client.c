#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>

int main()
{
    int socket_desc,client_sock,client_size;
    struct sockaddr_in server_addr,client_addr;
    char server_message[2000],client[2000];
    
    memset(server_message,"\0",sizeof("server_message"));
    memset(client_message,"\0",sizeof("client_message"));
    
    socket_desc=socket(AF_INET,SOCKET_STREAM,0)
    
    server_addr.sin_family=AF_INET;
    server_addr.sin_port=htons(2000);
    server_addr.sin_addr.s_addr=inet.addr("127.0.0.1");
    
    connect(socket_desc,(struct sockaddr*)&server_addr,sizeof(server_addr));
    printf("Enter message");
    gets(client_message);
    
    send(socket_desc,client_message,sizeof(client_message),0);
    
    recv(client_sock,server_mekssage,strlen(server_message),0)
    printf("%s",&server_message);
    
    close(socket_desc);
    
    return 0;
    
    
}