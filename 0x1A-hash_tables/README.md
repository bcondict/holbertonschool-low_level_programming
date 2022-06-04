# 0x1A. C - Hash tables
#### What is a hash function
Is any function that can be used to map data of arbitrary size to fixed-size values. The values returned by a hash function are called 'hash values', 'hash codes', 'digest' or simply 'hashes'.
#### What makes a good hash function
1. The hash value is fully determined by the data being hashed.
2. The hash function uses all the input data.
3. The hash function "uniformly" distibutes the data across the entire set of possible hash balues.
4. The hash function generates very different hash values for similar strings.
#### what is a hash table, how do they work and how to use them
Is a data structure that implements a set abstract data type, a structure that can map keys to values.
#### what is a collision and what are the main ways of dealing with collisions in the context of a hash table
A collision is when the hash function generates the same index for more than one key.
#### what are the advantages and drawbacks of using hash tables
#### what are the most common use cases of hash tables