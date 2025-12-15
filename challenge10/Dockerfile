FROM gcc:latest
WORKDIR /app
COPY . .
RUN make test
ENTRYPOINT ["./app"]
