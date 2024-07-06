#!/usr/bin/python3
"""script for testing status of web pages
"""
if __name__ == "__main__":
    import requests
    url = "https://intranet.hbtn.io/status"
    response = requests.get(url)
    content = response.text.strip()
    content_to_display = "OK" if "OK" in content else content
    print_str = '''Body response:
\t- type: {}
\t- content: {}'''.format(type(content_to_display), content_to_display)
    print(print_str)
