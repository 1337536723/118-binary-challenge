FROM ubuntu
MAINTAINER segno
RUN apt-get update
RUN apt-get install xinetd -y
RUN useradd -m bug-sort
RUN chown -R root:root /home/bug-sort
CMD ["/usr/sbin/xinetd","-dontfork"]
