#!/usr/bin/python
# -*- coding:UTF-8 -*-
from bs4 import BeautifulSoup
import requests
if __name__ == "__main__":
    #target = 'https://auction.artron.net/result/'
    target = 'https://www.google.com.hk/?gws_rd=ssl'
    req = requests.get(url = target)
    html = req.text
    div_bf = BeautifulSoup(html)
    div = div_bf.find_all('div', class_ = 'listmain')
    print(div[0])
