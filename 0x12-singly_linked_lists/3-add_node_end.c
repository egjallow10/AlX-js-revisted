#include "lists.h"


int str_len(const char *str){
    int len = 0;
    while(*str != '\0'){
        len++;
        str++;
    }
    return len;
}
char *_strdup(const char *str){
    int len = str_len(str), i;
    char *new_str = malloc(sizeof(char) * (len + 1));
    if(new_str == NULL){
        return NULL;
    }
    for(i = 0; i < len; i++){
        new_str[i] = str[i];
    }
    new_str[len] = '\0';
    return new_str;
}
list_t *add_node_end(list_t **head, const char *str){
    list_t *new_node = malloc(sizeof(list_t));
    list_t *temp;
    if(new_node == NULL){
        return NULL;
    }
    new_node->str = _strdup(str);
    new_node->len = str_len(str);
    new_node->next = NULL;
    if(*head == NULL){
        *head = new_node;
        return new_node;
    }
    temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    return new_node;
}