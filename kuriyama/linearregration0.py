# -*- coding: utf-8 -*-
import matplotlib as plt
import numpy as np
from sklearn import datasets

diabetes = datasets.load_diabetes()
#print(diabetes.keys())
diabetes_X  = diabetes.data[:,np.newaxis,2]
print(diabetes_X)


#dict_keys(['data', 'target', 'frame', 'DESCR', 'feature_names', 'data_filename', 'target_filename'])
#print(diabetes.DESCR)
"""
Created on Mon Jan 24 13:53:34 2022

@author: Dipak
"""



