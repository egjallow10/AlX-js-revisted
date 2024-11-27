#!/usr/bin/env python3
"""
return collection
"""


def list_all(mongo_collection):
    """Return collection
    @mongo_collection
    """
    return mongo_collection.find()

