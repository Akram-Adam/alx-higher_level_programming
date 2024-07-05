#!/usr/bin/python3
"""
Fetches and displays the body of https://alx-intranet.hbtn.io/status using urllib.

Usage: ./fetch_status.py
"""
import urllib.request

if __name__ == "__main__":
    url = 'https://alx-intranet.hbtn.io/status'
    
    with urllib.request.urlopen(url) as response:
        html = response.read()
        print(f"Body response:")
        print(f"\t- type: {type(html)}")
        print(f"\t- content: {format(html)}")
        print(f"\t- content: {html.decode('utf-8')}")