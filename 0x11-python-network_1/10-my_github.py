#!/usr/bin/python3
"""
Fetches the GitHub user ID using Basic
Authentication with a personal access token.
Usage: ./github_user_id.py <username> <personal_access_token>
"""
import requests
import sys

if __name__ == "__main__":
    username = sys.argv[1]
    access_token = sys.argv[2]

    url = f"https://api.github.com/user"
    headers = {
        "Authorization": f"Basic {username}:{access_token}"
    }

    try:
        response = requests.get(url, headers=headers)
        if response.status_code == 200:
            user_data = response.json()
            user_id = user_data['id']
            print(f"Your GitHub user ID is: {user_id}")
        else:
            print(f"Failed: {response.status_code} - {response.text}")
    except requests.RequestException as e:
        print(f"Request failed: {e}")
