FROM alpine

RUN echo "@testing https://dl-cdn.alpinelinux.org/alpine/edge/testing" >> /etc/apk/repositories && \
    apk update &&                        \
    apk add g++                          \
            mongo-cxx-driver-dev@testing \
            make                         \
            git

WORKDIR /app

ADD . .
RUN make build

CMD ["/app/build/app.out"]
