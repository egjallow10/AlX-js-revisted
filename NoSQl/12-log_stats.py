#!/usr/bin/env python3

from pymongo import MongoClient

if __name__ == '__main__':
    client = MongoClient()
    nginx_collection = client.logs.nginx

    no_of_doc = nginx_collection.count_documents({})

    print(f'{no_of_doc} logs')
    print('Methods:')
    for method in ["GET", "POST", "PUT", "PATCH", "DELETE"]:
        no_get = nginx_collection.count_documents({'method': method})
        print(f'\tmethod {method}: {no_get}')

    no_of_methodand_path = nginx_collection.count_documents({'method': "GET", 'path': '/status'})
    print(f'{no_of_methodand_path} status check')