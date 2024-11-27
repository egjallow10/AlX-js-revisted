#!/usr/bin/env python3
"""
Inser
"""


def insert_school(mongo_collection, **kwargs):
    """
    return inserted data id
    @mongo_collection
    @**kwargs
    """
    return mongo_collection.insert_one(kwargs).inserted_id
