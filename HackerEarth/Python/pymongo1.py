import pymongo

client = pymongo.MongoClient()

mydb = client["demo"]
mycol = mydb["people"]
data = {'name':'shashwat', 'age':19}
mycol.insert_one(data)