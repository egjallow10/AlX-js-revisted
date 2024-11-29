#!/usr/bin/env python3

def schools_by_topic(mongo_collection, topic):
    """
    comment
    """
    return mongo_collection.find({'topics': topic})