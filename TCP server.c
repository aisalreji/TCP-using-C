
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main()
{
    int socket_desc,client_sock,client_size;
    struct sockaddr_in server_addr,client_addr;
    char server_message[2000],client_message[2000];
    
    memset(server_message,"\0",sizeof(server_message));
    memset(client_message,"\0",sizeof(client_message));
    
    socket_desc=socket(AF_INET,SOCK_STREAM,0)
    
    server_addr.sin_family=AF_INET;
    server_addr.sin_port=htons(2000);
    server_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
    
    bind(socket_desc,(struct sockaddr*)&server_addr,sizeof(server_addr)) 
    
    listen(socket_desc,1);
    
    client_sock=accept(socket_desc,(struct sockaddr*)&client_addr,sizeof(client_addr));
    
    printf("ip of client %s",inet_ntoa(client_addr.sin_add));
    printf("port of client %i",ntohs(client_addr.sin_port));
    
    recv(client_sock,client_message,sizeof(client_message),0);
    printf("messages from client %s \n",client_message);
    
    strcpy(server_message," kochuz mara onthu");
    send(client_sock,server_message,sizeof(server_message),0)
    
    close(client_sock);
    close(socket_desc);
    
    return 0;
}