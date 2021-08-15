FROM alpine

RUN apk update && \
    apk add g++ \
            make

WORKDIR /app
ADD . .

RUN make

CMD ["/app/build/app.out"]
