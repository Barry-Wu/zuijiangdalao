# coding:utf-8

import argparse
import sys
import os
import time
import numpy as np
import collections
import tensorflow as tf
import tensorflow.contrib.rnn as rnn
import tensorflow.contrib.legacy_seq2seq as seq2seq

python gen.py --mode train
python gen.py --mode sample
