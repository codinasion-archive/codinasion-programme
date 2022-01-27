---
metatitle: How to setup Django in Ubuntu
description: How to setup Django in Ubuntu.
slug: /django/django-setup-in-ubuntu
---

# How to setup Django in Ubuntu

<br/>

## What is Django ?

[Django](https://www.djangoproject.com/ "Django official site") is a high-level Python Web framework that encourages rapid development and clean, pragmatic design. Built by experienced developers, it takes care of much of the hassle of Web development, so you can focus on writing your app without needing to reinvent the wheel. It’s free and open source.

## Installation

Before Django installation, we need to install some other packages.

### Python

[Python](https://www.python.org/ "Python official site") is a high-level, interpreted, interactive and object-oriented scripting language. Python is designed to be highly readable. It uses English keywords frequently where as other languages use punctuation, and it has fewer syntactical constructions than other languages.

You can download and install python for [Linux/UNIX](https://www.python.org/downloads/source/ "Download python for Linux/UNIX").

Or, you can install python from terminal

##### install

```terminal
sudo apt update
```

```terminal
sudo apt install software-properties-common
sudo add-apt-repository ppa:deadsnakes/ppa
sudo apt update
sudo apt install python3.8
```

##### Verify install

```terminal
python3 --version
```

![verify python3 install](./images/1.png)

---

### Pip

[pip](https://pypi.org/project/pip/ "pip") is the package installer for Python. You can use pip to install packages from the Python Package Index and other indexes.

##### install

```terminal
sudo apt-get update
```

```terminal
sudo apt-get install python3-pip
```

##### Verify install

```terminal
pip3 --version
```

![verify pip install](./images/2.png)

---

### Virtual Environment

[Virtualenv](https://virtualenv.pypa.io/en/latest/#:~:text=virtualenv%20is%20a%20tool%20to,library%20under%20the%20venv%20module. "virtualenv") is a tool to create isolated Python environments.

##### install

```terminal
sudo apt install python3-virtualenv
```

##### Verify install

```terminal
virtualenv --version
```

![verify venv install](./images/3.png)

## Virtual Environment Setup

##### create virtual environment

```terminal
mkdir django_setup
cd django_setup
python3 -m venv env
```

![creating virtual environment](./images/4.png)

---

### Activating virtual environment

```terminal
source env/bin/activate
```

![activating virtual environment](./images/5.png)

### Deactivating virtual environment

```terminal
deactivate
```

![deactivating virtual environment](./images/6.png)

## Django installation

**Note :- Before proceeding to installation, activate your virtual environment (env), otherwise Django will be installed on your system (not in virtual environment), which can cause errors for future projects**

##### install django

```terminal
pip install django
```

![django install](./images/7.png)

##### Verify installation

```terminal
django-admin --version
```

![verify django install](./images/8.png)

## Project Setup

#### Create a django project

```terminal
django-admin startproject hello_world
cd hello_world
```

![create django project](./images/9.png)

This command will create a hello_world folder (i.e. a django project) with basic django folder structure.

#### Project folder structure

```terminal
tree .
```

![django project structure](./images/10.png)

## Running localhost

**You will see a warning about unapplied migrations for the first time runserver command. So, we have to migrate all migrations before first time runserver command.**

##### migrate command

```terminal
python manage.py migrate
```

![migrate command](./images/11.png)

##### runserver command

```terminal
python manage.py runserver
```

![django runserver command](./images/12.png)

---

#### First look of project

This is the default homepage provided by Django.

![Django project homepage](./images/13.png)

<br/>

---
