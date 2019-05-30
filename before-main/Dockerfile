FROM ubuntu
MAINTAINER segno
RUN apt-get update
RUN apt-get install xinetd -y
RUN useradd -m before-main
RUN chown -R root:root /home/before-main
CMD ["/usr/sbin/xinetd","-dontfork"]
